#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

#include "CSGO_HX.h"
#include "Adriel/console.hpp"
#include "VMProtectDefs.h"

HANDLE CreateThreadSafe(const LPTHREAD_START_ROUTINE func, const LPVOID lParam)
{
	const HANDLE hThread = CreateThread(nullptr, 0, nullptr, lParam, CREATE_SUSPENDED, nullptr);
	if (!hThread)
	{
		__fastfail(1);
		return 0;
	}

	CONTEXT threadCtx;
	threadCtx.ContextFlags = CONTEXT_INTEGER;
	GetThreadContext(hThread, &threadCtx);
#ifdef _WIN64
	threadCtx.Rax = reinterpret_cast<decltype(threadCtx.Rax)>(func);
#else
	threadCtx.Eax = reinterpret_cast<decltype(threadCtx.Eax)>(func);
	threadCtx.ContextFlags = CONTEXT_INTEGER;
#endif
	SetThreadContext(hThread, &threadCtx);

	if (ResumeThread(hThread) != 1 || ResumeThread(hThread) != NULL)
	{
		__fastfail(1);
		return 0;
	}

	return hThread;
}

extern HINSTANCE hInstance; //Inside Overlay.h

BOOL APIENTRY DllMain(CONST HMODULE hModule, CONST DWORD dwReason, CONST LPVOID lpReserved)
{


	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	{

		hInstance = (HINSTANCE)hModule;

		console::get().initialize();

		logger::add(LSUCCESS, "reached DllMain");

		CreateThread(0, 0, &CheatInit, hModule, 0, 0);
		

		logger::add(LSUCCESS, "after cheat init");
		break;
	}
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		//glorious hack to stop the game from getting stuck in valve's delete function when closing the game
		g_bIsExiting = true;
		g_pMemAlloc = nullptr;
		break;
	}
	return TRUE;
	
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class aebnelc {
public:
	double hdomxrmuxxamf;
	string nkmggplfntxhdr;
	double wmxtuu;
	int nuoldcskayw;
	aebnelc();
	double htebkzvfgbpk(string phwsukqkxpb, string vitjxvwy, string boorsybxgpbr, bool endyhbyqzmtr, double prvbikhggcb, double wrezmqew, int iqalbiprlcgzwwl);
	bool qxkxjynzfdixba(int lnczljgjrln, bool aqijmfzurr, string lulhreeto, double wtandljdotkersb, int gabiefdavfsqdme, double xinfqpkmphfe, int elfyajx, string iuvgj, bool wglmgtswzj);
	string crqdvumhwzdqzaraelz(string weabct, bool uvaodfvkyffngk, string pilwesvcnxmpgov, string oefjoadqciexoy, double xtzxcdw, double uvtbifflgeq, double vtlaqltmhiu, bool oubjcrbj, string sfwcapssfreq, double njjbngxzdkes);
	void batwtxieidjiorfcwy(string xtzarkdlugyi, double qjfxkyh, int cxrmarjq, double drljyk, string ijqep, string xyansnswjtig, int ivegu, double qvxqyjczzhtt, int mpkxalwqboow, double ywexhyuqcjvjocg);
	int oqkpervxfxxijccca(bool kjlkvfogieiiz, int qotyffvvyuc, string hwirhboargta, string kiijcofvydo, double riycsd, bool apzmqftrwq);
	int ymnqbtpcpp(int akflkyicyjtbok);
	int cjahckslukliienstxaejggs(int rediwglknp);
	double ccuzbafhwltjyomr(bool iskvpvnafcpxc, string agzerug, int eklbqlv, int ltjaaywknvgsjo, string ejjdyfixzwk, string ajansy, double kgcoddhyri, double pnmmxdwtrslftr, int uuyxagundhlgxhh, bool xfecymrkryxbcky);
	bool qaxjudqhykxgycfflopj();

protected:
	string pjlgwtqtvxtlolf;
	bool xdvkd;
	double yskvbnehai;

	string slvbbhccnriai();
	double ryvjrlujkugwmueuleae(double xxdlulzcad, bool ufixyknturdi, bool ibgabqmxnufgc, bool yibgpp);
	int zlacpjiuznyypnmyvz(string japoey, double nbgjvicgasq, int byetspowatllrcf);
	string hpdpdrlzdqamrgt(double foweqlfihfclyk, string rfgijjhjfzenqsz, double rdoyl, bool zoxamxpryyprjo, int dbylwtmlupd, bool vmtnlawletuhpp, bool njlkaqc, int qqwicptyh, bool sedrtbpkoo, int axsewwl);
	void uvsexlhydnkvqqnymgbwqcf(int vtbxzcnimnvhfgi, string jbnfqb, double hipbkhyguqyz, string jmuplitto, int gyopdbohsabsykb);
	bool kalzuaxtsubauzcjqvos(int ljxaznm);
	double kkhlcokpaqhikeoajyk(bool mllcamgzeljha, double fwzgt, string zqlccdcfmwuou, double tzzaaqppklmsae, int nxgzpmaq, int cwapoear, bool ciqjog, string auaivvlejpxfo, double otyqxj, bool dxfqobtf);
	bool akqvlvepwwpjsesvfdgpskl(bool hxkzkrtbwmcoi, double vjzmansfya, double tunbftqprwg, int ljllcminl, double bwqhojhcfrzkwac);

private:
	double ywwaqib;
	string zycazb;
	string lrmrdxqcsmj;
	double evjqhasm;

	string hqxdjimkldpblbzasuxwsyl(double pmybkvoev, int rlgczw, double arikrrmlrkm, double dggodebpyjapkva, double nnzjfukdxtc, int tbhuhfutniyx, double koitao, int ilcirt, int mqmbrnrzr);
	double tstdkswugozwlirxpvodbsha(bool zdnyvwnzpntka, bool puqxiikqm, string bbctrmfzg, bool bhwkhrqfn, int lekxzzoopombimf, string njpgg);
	void wsldhdalxutfckpso(string jyslk);
	void pyxeztbxdoyudmkyv(double tyjwmynvoxi, string pqimduxarunkx, bool uafthzwpgbydf, string lcdxxzqynpxcfg, string mrgyvtyrwn, int rzyzgsmzjql, string zygebj, int gcordvraux, int wfsdhwuvffgh);
	double ircubfzsouwcmkflsksu(double yabuvydshjaiga);
	double kvbasytpwjlqyeeah(bool cbbzttzpio, double nkgmtlwlr);
	bool vfleetoyekvyatwhuwj(string qavatnm, int jeoyhuva, bool ldcipplosplzhy, string zllnbdgtiyzrf, string vxzoxicrublktd);

};


string aebnelc::hqxdjimkldpblbzasuxwsyl(double pmybkvoev, int rlgczw, double arikrrmlrkm, double dggodebpyjapkva, double nnzjfukdxtc, int tbhuhfutniyx, double koitao, int ilcirt, int mqmbrnrzr)
{
	string tkbvn = "kvnusnrkgqehwvschajmwxkttoq";
	string glngsmtl = "xlpjkep";
	double rlwkgzllrli = 19082;
	string gaatvzbyqfqaqor = "nslrrtxnsigmdizslmytjanizrmesjutqqcsyjkgmikoczjihdiaxyvpwidavqesjkxatuofg";
	double hcyodwqzp = 67289;
	double uycjiuigcmlgge = 31493;
	if (31493 == 31493)
	{
		int yboamzib;
		for (yboamzib = 26; yboamzib > 0; yboamzib--)
		{
			continue;
		}
	}
	return string("qz");
}

double aebnelc::tstdkswugozwlirxpvodbsha(bool zdnyvwnzpntka, bool puqxiikqm, string bbctrmfzg, bool bhwkhrqfn, int lekxzzoopombimf, string njpgg)
{
	return 71667;
}

void aebnelc::wsldhdalxutfckpso(string jyslk)
{
	int yrdcafrtkz = 4083;
	string cnovzxrqzryp = "pqaammeyslvubeqigtvgqyuuhdqyckjcvsshwqjcpzfdfrkeghpnxnizjjwxkgrdkswglnqumjmhlwwvvajr";
	bool thnpxyykzimow = false;
	if (4083 == 4083)
	{
		int kvnpdifn;
		for (kvnpdifn = 20; kvnpdifn > 0; kvnpdifn--)
		{
			continue;
		}
	}
	if (false == false)
	{
		int xtcbneqaiz;
		for (xtcbneqaiz = 86; xtcbneqaiz > 0; xtcbneqaiz--)
		{
			continue;
		}
	}
	if (4083 != 4083)
	{
		int tmc;
		for (tmc = 24; tmc > 0; tmc--)
		{
			continue;
		}
	}

}

void aebnelc::pyxeztbxdoyudmkyv(double tyjwmynvoxi, string pqimduxarunkx, bool uafthzwpgbydf, string lcdxxzqynpxcfg, string mrgyvtyrwn, int rzyzgsmzjql, string zygebj, int gcordvraux, int wfsdhwuvffgh)
{
	int dbkzoasfpokk = 819;
	int fwoupfzsrrxzftg = 609;
	double fvxfmbocguoirju = 8582;
	bool taolhsdphbwgmj = false;
	double vmlbepfmshlx = 1150;
	string eewmduhnz = "ylmpgxapgjpgayzprojlnpycwcophnxejhabjkjphgvdbcksxoolcsjafzjimsrdfazqrhwusgrxmqigxytpvmojrjmilbdnhcy";
	if (819 == 819)
	{
		int ntdvq;
		for (ntdvq = 41; ntdvq > 0; ntdvq--)
		{
			continue;
		}
	}
	if (609 != 609)
	{
		int rmnrrse;
		for (rmnrrse = 5; rmnrrse > 0; rmnrrse--)
		{
			continue;
		}
	}
	if (819 != 819)
	{
		int orpfugyjhd;
		for (orpfugyjhd = 88; orpfugyjhd > 0; orpfugyjhd--)
		{
			continue;
		}
	}
	if (8582 != 8582)
	{
		int wwm;
		for (wwm = 74; wwm > 0; wwm--)
		{
			continue;
		}
	}
	if (609 == 609)
	{
		int criwwoil;
		for (criwwoil = 33; criwwoil > 0; criwwoil--)
		{
			continue;
		}
	}

}

double aebnelc::ircubfzsouwcmkflsksu(double yabuvydshjaiga)
{
	int wwhjnj = 2349;
	string qpblxbpmtm = "zurfzxbuhrbdwradeqsoyidlcwhexwfiplsffuasglwtvyjidoeuiciduggehkdvh";
	bool vipepk = true;
	string tqoybi = "aubrzuoawciajbooccbozjjjzxniqepavaenboqkgvkbqisxjjionuwowxingbfkjmumzvwltplaeg";
	string hxfduhc = "fixyqshwjklthcnvljdthsowmlucbrzaazywihxuuolxtlzdyesaeyzkgh";
	string mgnmyk = "irzrtvfvqjuxlbcifjncbxoprsxkqcpettgvqdnnealdayyltcrgbuhftflmsufkfynbwniimsu";
	double caukxjyi = 8494;
	if (true != true)
	{
		int cqrqmgib;
		for (cqrqmgib = 76; cqrqmgib > 0; cqrqmgib--)
		{
			continue;
		}
	}
	if (2349 != 2349)
	{
		int lhlxjx;
		for (lhlxjx = 15; lhlxjx > 0; lhlxjx--)
		{
			continue;
		}
	}
	if (string("zurfzxbuhrbdwradeqsoyidlcwhexwfiplsffuasglwtvyjidoeuiciduggehkdvh") != string("zurfzxbuhrbdwradeqsoyidlcwhexwfiplsffuasglwtvyjidoeuiciduggehkdvh"))
	{
		int kustszf;
		for (kustszf = 11; kustszf > 0; kustszf--)
		{
			continue;
		}
	}
	return 45611;
}

double aebnelc::kvbasytpwjlqyeeah(bool cbbzttzpio, double nkgmtlwlr)
{
	double xbhafjuiivmeur = 7988;
	int htlesswpkr = 1781;
	bool adxicvglkdxxavw = true;
	double omjutzpvgr = 2955;
	double yklkmutfbnd = 66532;
	bool lnoojbzlwlth = true;
	bool nkuezdwdhtsm = false;
	if (2955 != 2955)
	{
		int miv;
		for (miv = 15; miv > 0; miv--)
		{
			continue;
		}
	}
	return 5930;
}

bool aebnelc::vfleetoyekvyatwhuwj(string qavatnm, int jeoyhuva, bool ldcipplosplzhy, string zllnbdgtiyzrf, string vxzoxicrublktd)
{
	bool pnneodob = true;
	if (true != true)
	{
		int iyubvur;
		for (iyubvur = 14; iyubvur > 0; iyubvur--)
		{
			continue;
		}
	}
	if (true == true)
	{
		int rg;
		for (rg = 82; rg > 0; rg--)
		{
			continue;
		}
	}
	if (true != true)
	{
		int gctkabob;
		for (gctkabob = 78; gctkabob > 0; gctkabob--)
		{
			continue;
		}
	}
	return false;
}

string aebnelc::slvbbhccnriai()
{
	bool gorzvedhuke = false;
	string egijrhc = "fcutgcmfhmsukidlfjjxgvnfksbdbzheqzsrrbowsvoixpgwidvahmhbyuamqblhzsd";
	double hvqsk = 10698;
	string dfjafccvemkzj = "laceuutvtlcwqrsquulazehng";
	bool enxxsi = true;
	double rdonrjiaege = 53875;
	bool xdmzghflqaezawx = true;
	bool nowfvazaxsjxutf = false;
	int htwsh = 364;
	string ounxmvgi = "fdxwsmgmuysafnrockwlmkkodclfkiilcgwvgdafksyzpmqhzctnsvzjpovrdyuuqtrqdjzzebzqlaymyyh";
	return string("q");
}

double aebnelc::ryvjrlujkugwmueuleae(double xxdlulzcad, bool ufixyknturdi, bool ibgabqmxnufgc, bool yibgpp)
{
	return 67484;
}

int aebnelc::zlacpjiuznyypnmyvz(string japoey, double nbgjvicgasq, int byetspowatllrcf)
{
	string wrawygxpqh = "gwxqmthxagcfqydpebvavxgawpwzhd";
	double lvjunwkrfqwvhc = 26904;
	string shtyyseax = "kddilxnpftcqpoxwoucoarixpzbbudzmkeykmlimiaddtunbhhyecfoelsyrwuyzhosrbmzgjnwqzbndvhkfpkssnurnhlrelmg";
	double moxlpcwrqeeb = 18110;
	int hspeksx = 1715;
	string hfgileguyuk = "o";
	double oesueak = 47677;
	if (string("o") == string("o"))
	{
		int ywtlvxeyh;
		for (ywtlvxeyh = 6; ywtlvxeyh > 0; ywtlvxeyh--)
		{
			continue;
		}
	}
	return 84362;
}

string aebnelc::hpdpdrlzdqamrgt(double foweqlfihfclyk, string rfgijjhjfzenqsz, double rdoyl, bool zoxamxpryyprjo, int dbylwtmlupd, bool vmtnlawletuhpp, bool njlkaqc, int qqwicptyh, bool sedrtbpkoo, int axsewwl)
{
	int tcifjnhl = 3097;
	int eokysnxlwzbnkib = 4378;
	double vpkxdf = 3249;
	string gujcbdt = "plivzoldvknhsgsiaamkxyujwtpekpnsopvdvqlpixazhiilstlvmxtxpylnklevevopntmsdxbo";
	bool enxzruzrbsl = false;
	int ldwopzw = 1854;
	double runkafhzpeg = 20334;
	bool nxlsgnmmezcpsxv = true;
	if (false != false)
	{
		int niri;
		for (niri = 16; niri > 0; niri--)
		{
			continue;
		}
	}
	if (1854 == 1854)
	{
		int kk;
		for (kk = 12; kk > 0; kk--)
		{
			continue;
		}
	}
	if (3097 != 3097)
	{
		int hxnzprw;
		for (hxnzprw = 86; hxnzprw > 0; hxnzprw--)
		{
			continue;
		}
	}
	if (true == true)
	{
		int jkifeeo;
		for (jkifeeo = 99; jkifeeo > 0; jkifeeo--)
		{
			continue;
		}
	}
	if (false != false)
	{
		int bmiyeflof;
		for (bmiyeflof = 65; bmiyeflof > 0; bmiyeflof--)
		{
			continue;
		}
	}
	return string("owpeoeitrstpvegd");
}

void aebnelc::uvsexlhydnkvqqnymgbwqcf(int vtbxzcnimnvhfgi, string jbnfqb, double hipbkhyguqyz, string jmuplitto, int gyopdbohsabsykb)
{
	bool epfunsrvhcyjxz = false;
	double cvidvg = 8890;
	string dzfxuxfqwaorviq = "bukgdwmavmigxkjdcadkgehgjywryu";
	string sfkblnrgvhqz = "setak";
	int ehxbqhydpo = 372;
	string rlambpyk = "oznfsbvurbwtrmdgzorsykgacqjhjjrscjpskhgqatqkawrinjworzneeutodoykxiusjjkf";
	double uxivkaoihjgn = 11435;
	if (11435 == 11435)
	{
		int yxgtavsc;
		for (yxgtavsc = 57; yxgtavsc > 0; yxgtavsc--)
		{
			continue;
		}
	}
	if (string("setak") == string("setak"))
	{
		int nkvccktx;
		for (nkvccktx = 64; nkvccktx > 0; nkvccktx--)
		{
			continue;
		}
	}

}

bool aebnelc::kalzuaxtsubauzcjqvos(int ljxaznm)
{
	bool hwcipp = false;
	string bcajaizge = "ozvcoenpzqebprvuoogdccnyprrnbkfnccszrxckuzzhncuzxccnkcsjttzvogcdvpehnoamcijxotywfqwaplxreiqy";
	int maudyfrkblfanyo = 3433;
	double digpgsz = 31647;
	string regqcjfahvoen = "ouhgcqgwragblrl";
	int pdlryrdwyewsv = 1514;
	bool tkmgqfg = false;
	int rfvpxehqqxxnt = 5017;
	int ahpoblmyokwua = 2617;
	bool blrizokeaffio = true;
	if (1514 != 1514)
	{
		int vg;
		for (vg = 64; vg > 0; vg--)
		{
			continue;
		}
	}
	if (5017 == 5017)
	{
		int rac;
		for (rac = 81; rac > 0; rac--)
		{
			continue;
		}
	}
	if (3433 != 3433)
	{
		int ynghep;
		for (ynghep = 29; ynghep > 0; ynghep--)
		{
			continue;
		}
	}
	if (string("ouhgcqgwragblrl") == string("ouhgcqgwragblrl"))
	{
		int xd;
		for (xd = 93; xd > 0; xd--)
		{
			continue;
		}
	}
	if (string("ozvcoenpzqebprvuoogdccnyprrnbkfnccszrxckuzzhncuzxccnkcsjttzvogcdvpehnoamcijxotywfqwaplxreiqy") != string("ozvcoenpzqebprvuoogdccnyprrnbkfnccszrxckuzzhncuzxccnkcsjttzvogcdvpehnoamcijxotywfqwaplxreiqy"))
	{
		int nva;
		for (nva = 76; nva > 0; nva--)
		{
			continue;
		}
	}
	return true;
}

double aebnelc::kkhlcokpaqhikeoajyk(bool mllcamgzeljha, double fwzgt, string zqlccdcfmwuou, double tzzaaqppklmsae, int nxgzpmaq, int cwapoear, bool ciqjog, string auaivvlejpxfo, double otyqxj, bool dxfqobtf)
{
	double jtlyvxpujbsvtq = 6870;
	string hzmrb = "cmflfnmxzkfmouhbezqwpmuqocxoqiauakbyzyhoqusprckhqhr";
	bool tjexjcwiggvgw = true;
	bool nfyajbmaze = false;
	bool tacidqp = false;
	int fvcainkkut = 1122;
	return 98837;
}

bool aebnelc::akqvlvepwwpjsesvfdgpskl(bool hxkzkrtbwmcoi, double vjzmansfya, double tunbftqprwg, int ljllcminl, double bwqhojhcfrzkwac)
{
	int megkfdweq = 855;
	int etdowouyjlenmyv = 1613;
	bool hsekh = true;
	bool cjpfm = false;
	double fthktb = 3450;
	bool warpaouygggwyeq = true;
	string wgypfzk = "vcgprsorbdwsdwlrixfnrmxjsjbyagdwtuljenzgkdsdfnjgdafolkrxiuz";
	int dsiepew = 1150;
	double ncnnsnmz = 40066;
	if (false == false)
	{
		int zgczcsii;
		for (zgczcsii = 45; zgczcsii > 0; zgczcsii--)
		{
			continue;
		}
	}
	if (3450 == 3450)
	{
		int gohm;
		for (gohm = 54; gohm > 0; gohm--)
		{
			continue;
		}
	}
	if (string("vcgprsorbdwsdwlrixfnrmxjsjbyagdwtuljenzgkdsdfnjgdafolkrxiuz") == string("vcgprsorbdwsdwlrixfnrmxjsjbyagdwtuljenzgkdsdfnjgdafolkrxiuz"))
	{
		int hvfbsx;
		for (hvfbsx = 68; hvfbsx > 0; hvfbsx--)
		{
			continue;
		}
	}
	if (true != true)
	{
		int jmmagiaix;
		for (jmmagiaix = 34; jmmagiaix > 0; jmmagiaix--)
		{
			continue;
		}
	}
	return true;
}

double aebnelc::htebkzvfgbpk(string phwsukqkxpb, string vitjxvwy, string boorsybxgpbr, bool endyhbyqzmtr, double prvbikhggcb, double wrezmqew, int iqalbiprlcgzwwl)
{
	bool gjxnygyycs = false;
	bool wbglxh = false;
	double vorabhlfmrxgpa = 354;
	double dsbhqxqhbkavrhe = 10979;
	string gnpzxqa = "puiyqhhfdcdwqtwokltyxogwtwuzgvcuxhbxdlewpddohxuxkqmjbthvjnrtgujjnpctetnjqdrgiem";
	if (354 != 354)
	{
		int dsqwbwccwa;
		for (dsqwbwccwa = 69; dsqwbwccwa > 0; dsqwbwccwa--)
		{
			continue;
		}
	}
	if (false == false)
	{
		int vl;
		for (vl = 78; vl > 0; vl--)
		{
			continue;
		}
	}
	if (10979 != 10979)
	{
		int cayhb;
		for (cayhb = 61; cayhb > 0; cayhb--)
		{
			continue;
		}
	}
	if (string("puiyqhhfdcdwqtwokltyxogwtwuzgvcuxhbxdlewpddohxuxkqmjbthvjnrtgujjnpctetnjqdrgiem") == string("puiyqhhfdcdwqtwokltyxogwtwuzgvcuxhbxdlewpddohxuxkqmjbthvjnrtgujjnpctetnjqdrgiem"))
	{
		int dfonct;
		for (dfonct = 73; dfonct > 0; dfonct--)
		{
			continue;
		}
	}
	if (354 == 354)
	{
		int ykwurl;
		for (ykwurl = 78; ykwurl > 0; ykwurl--)
		{
			continue;
		}
	}
	return 90734;
}

bool aebnelc::qxkxjynzfdixba(int lnczljgjrln, bool aqijmfzurr, string lulhreeto, double wtandljdotkersb, int gabiefdavfsqdme, double xinfqpkmphfe, int elfyajx, string iuvgj, bool wglmgtswzj)
{
	string jwwreiymtcfkxzc = "";
	double unclzgzyhcc = 22117;
	int myjeeawl = 988;
	if (988 != 988)
	{
		int mjxetg;
		for (mjxetg = 40; mjxetg > 0; mjxetg--)
		{
			continue;
		}
	}
	if (22117 == 22117)
	{
		int lxrejxhrg;
		for (lxrejxhrg = 6; lxrejxhrg > 0; lxrejxhrg--)
		{
			continue;
		}
	}
	if (22117 != 22117)
	{
		int rbqhfsqs;
		for (rbqhfsqs = 11; rbqhfsqs > 0; rbqhfsqs--)
		{
			continue;
		}
	}
	if (988 != 988)
	{
		int pl;
		for (pl = 49; pl > 0; pl--)
		{
			continue;
		}
	}
	if (988 != 988)
	{
		int btr;
		for (btr = 34; btr > 0; btr--)
		{
			continue;
		}
	}
	return false;
}

string aebnelc::crqdvumhwzdqzaraelz(string weabct, bool uvaodfvkyffngk, string pilwesvcnxmpgov, string oefjoadqciexoy, double xtzxcdw, double uvtbifflgeq, double vtlaqltmhiu, bool oubjcrbj, string sfwcapssfreq, double njjbngxzdkes)
{
	return string("eavhlvxvkz");
}

void aebnelc::batwtxieidjiorfcwy(string xtzarkdlugyi, double qjfxkyh, int cxrmarjq, double drljyk, string ijqep, string xyansnswjtig, int ivegu, double qvxqyjczzhtt, int mpkxalwqboow, double ywexhyuqcjvjocg)
{
	double sdaxbibkjrayxt = 6663;
	string fsmbt = "etfaagthxmmfkwdgythbjvubiaepxwybzdufucxsrkevrffednhfyyfiegxpnqoyeiy";
	int szhxowenishhiji = 1191;
	double mtwhuhzpnx = 26501;
	double vzbfggwnhdov = 86532;
	double vgdnlsakytpyl = 41185;
	bool behsc = true;
	bool elhqdn = true;
	if (true != true)
	{
		int sweuzbwqxj;
		for (sweuzbwqxj = 55; sweuzbwqxj > 0; sweuzbwqxj--)
		{
			continue;
		}
	}
	if (1191 != 1191)
	{
		int yybsfcas;
		for (yybsfcas = 35; yybsfcas > 0; yybsfcas--)
		{
			continue;
		}
	}
	if (26501 != 26501)
	{
		int xnpi;
		for (xnpi = 40; xnpi > 0; xnpi--)
		{
			continue;
		}
	}
	if (86532 != 86532)
	{
		int sdbqo;
		for (sdbqo = 86; sdbqo > 0; sdbqo--)
		{
			continue;
		}
	}
	if (string("etfaagthxmmfkwdgythbjvubiaepxwybzdufucxsrkevrffednhfyyfiegxpnqoyeiy") != string("etfaagthxmmfkwdgythbjvubiaepxwybzdufucxsrkevrffednhfyyfiegxpnqoyeiy"))
	{
		int geakne;
		for (geakne = 11; geakne > 0; geakne--)
		{
			continue;
		}
	}

}

int aebnelc::oqkpervxfxxijccca(bool kjlkvfogieiiz, int qotyffvvyuc, string hwirhboargta, string kiijcofvydo, double riycsd, bool apzmqftrwq)
{
	double wkgckgjydk = 18496;
	int ylzyicwigzi = 1459;
	int dimtpzdefo = 2554;
	bool lbzaykpeouux = false;
	int bksbtzazwgb = 3346;
	double cyltecpmwta = 25271;
	string awyspavswtp = "hpsxmn";
	int raowgxkrxvqs = 716;
	int uyvxwmwecd = 256;
	if (2554 != 2554)
	{
		int xtojxa;
		for (xtojxa = 96; xtojxa > 0; xtojxa--)
		{
			continue;
		}
	}
	if (18496 == 18496)
	{
		int woi;
		for (woi = 21; woi > 0; woi--)
		{
			continue;
		}
	}
	return 89786;
}

int aebnelc::ymnqbtpcpp(int akflkyicyjtbok)
{
	double vmqdkexvqnxfqz = 73787;
	bool ivfvrjnedwl = true;
	int pwldlcnk = 706;
	int eilflnjm = 442;
	bool wdkqbewmpcqrj = false;
	int cunxl = 1805;
	double yoigrp = 13234;
	string slvrbtjo = "mwwyjydtomozexrscmvqebbfeezhf";
	double hdtkauvzl = 4860;
	if (73787 == 73787)
	{
		int oyjxdrj;
		for (oyjxdrj = 24; oyjxdrj > 0; oyjxdrj--)
		{
			continue;
		}
	}
	if (false == false)
	{
		int zhrods;
		for (zhrods = 85; zhrods > 0; zhrods--)
		{
			continue;
		}
	}
	if (4860 != 4860)
	{
		int nl;
		for (nl = 33; nl > 0; nl--)
		{
			continue;
		}
	}
	return 52899;
}

int aebnelc::cjahckslukliienstxaejggs(int rediwglknp)
{
	double mdpndohczgvw = 33172;
	bool ytrqrlad = false;
	if (33172 != 33172)
	{
		int kqmhakmr;
		for (kqmhakmr = 10; kqmhakmr > 0; kqmhakmr--)
		{
			continue;
		}
	}
	if (33172 == 33172)
	{
		int soju;
		for (soju = 27; soju > 0; soju--)
		{
			continue;
		}
	}
	if (false == false)
	{
		int ylkahgbtzi;
		for (ylkahgbtzi = 83; ylkahgbtzi > 0; ylkahgbtzi--)
		{
			continue;
		}
	}
	if (33172 != 33172)
	{
		int hyif;
		for (hyif = 0; hyif > 0; hyif--)
		{
			continue;
		}
	}
	return 84469;
}

double aebnelc::ccuzbafhwltjyomr(bool iskvpvnafcpxc, string agzerug, int eklbqlv, int ltjaaywknvgsjo, string ejjdyfixzwk, string ajansy, double kgcoddhyri, double pnmmxdwtrslftr, int uuyxagundhlgxhh, bool xfecymrkryxbcky)
{
	return 75483;
}

bool aebnelc::qaxjudqhykxgycfflopj()
{
	double jpepperwsuny = 48344;
	double ywlmkhranfem = 7371;
	bool srdqdbdlyhmvl = true;
	double gbmcprdxnkscdf = 33473;
	string lsuznfxzafei = "yznyppjsmzumoozcobcjktzvvibxtjgvdbxkqohhogmqwolbcikkjlniojlfjtvvfilrryvlmvgysofhjuyrmvztjp";
	bool kufrbirlozgfval = false;
	if (48344 != 48344)
	{
		int aqistw;
		for (aqistw = 53; aqistw > 0; aqistw--)
		{
			continue;
		}
	}
	return false;
}

aebnelc::aebnelc()
{
	this->htebkzvfgbpk(string("rwblpjmpycclfkrlwtingjmnxrmfgnvpcce"), string("ujntcqtclugxqogob"), string("jvskvvtpoestcqcfnmsddqqybqfvyjzbdkhizggvxbitkwzymymzylcbbsqlevvhleaaqglwmusbunikeeibelnfnzdn"), true, 7380, 33472, 2068);
	this->qxkxjynzfdixba(3655, true, string("vtvwvhixyyhgcgijyikorndtwjobdbxbzqqpgxapcfndsdjannpbrlqsyjbewulisadsbfkhbsdrztbhilwdhtzdtltmfziwq"), 569, 104, 41259, 1203, string("khhvxhzbpfebnfioymmfkzhegefztuqwdoiuecv"), false);
	this->crqdvumhwzdqzaraelz(string("wowewnqywarlsorgkcesgpkmgqlzlvvqdmxitnpsxfugxoqblxohffkbmrqexwklwkqjtyfhbeuef"), false, string("agticvoxjvhrnetlwciilkbrzcrbkcqteudbftpmebbeoipkuqbtypjhqw"), string("m"), 3284, 32557, 2552, true, string("gysdkmkqahmlhktrlhpkcmjdhcyxgbnfkqdnpyrpnrzbwbqbaldx"), 32664);
	this->batwtxieidjiorfcwy(string("tkkuzcjyfpcorqyduhqvusmricyckptxjkajejxgdzbntocvifxmodhmcmjzundjoebfuy"), 7766, 3131, 13204, string("chxvjgcrbdplnfikklbvbuw"), string("rwyqtgtrghvqauhlsxynwp"), 1816, 79, 322, 20361);
	this->oqkpervxfxxijccca(false, 4050, string("angpwjvywkxbmfuazgrxrhzuyysgeogbcfbkioedsmffgwscbutjflqiyhmduuhlljrrvxttcvwrgsuqbqgoiiprjllrzo"), string("cwoptnlwbcrodztnbekaqblhigzoyxpykrhaclpeiqrhsbwlgsjvohhbouvxjusehiugajzrcpicifzbkkq"), 11262, true);
	this->ymnqbtpcpp(5655);
	this->cjahckslukliienstxaejggs(5167);
	this->ccuzbafhwltjyomr(true, string("duzdqels"), 2607, 454, string("riyxrcbqhiphbjoxraasbfhcggkuzfuwzzhjc"), string("wiugyteflxokzxgxoohpfggionyhzpaeuhbzh"), 9114, 8491, 2564, false);
	this->qaxjudqhykxgycfflopj();
	this->slvbbhccnriai();
	this->ryvjrlujkugwmueuleae(13358, true, false, true);
	this->zlacpjiuznyypnmyvz(string("pjpjieqnmclkbgkfrkkxgkvyrjsfvnwwlusjgnjsrrqlgrmwwixjbvurxozwuwogrdbuaacuesgfxpsepwizjqihxjjzlyhnvwyd"), 25275, 1165);
	this->hpdpdrlzdqamrgt(14623, string("wwxjwdxhixnevcaznsyfbghzwpdteao"), 27552, true, 1807, false, true, 1421, true, 8828);
	this->uvsexlhydnkvqqnymgbwqcf(3175, string("kejynxyohzhoiryucdzbmlbni"), 4989, string("gzisiicwkpltukgmmtvkneviuxaeaerdtujcrgleuvfshblvahiyqhhudirkpjusoqvbfbrtyphdgutygqqqiyngzg"), 4080);
	this->kalzuaxtsubauzcjqvos(688);
	this->kkhlcokpaqhikeoajyk(true, 66022, string("rtshzyuglfnouxison"), 6426, 725, 612, false, string("vizenbvhmpmvlfxknmafifrxvsazbukblbwfpbcorguhdcxclxdrzxvqiiewjchfvtokbjvepgrtbpujtwqnvruyxddogwermd"), 21730, false);
	this->akqvlvepwwpjsesvfdgpskl(true, 9713, 7634, 1961, 82080);
	this->hqxdjimkldpblbzasuxwsyl(15850, 1979, 1452, 3784, 16987, 2653, 33068, 511, 1504);
	this->tstdkswugozwlirxpvodbsha(true, true, string("ycmsvuzjxojedswzlahgrhseo"), false, 4741, string("vsnxjasskoacdiywhoptwebknrcduhaebmeshvimzpnymuvjyyycixlufcnhkb"));
	this->wsldhdalxutfckpso(string("psegmmiqmllcwladcjwsdvmqvcztkyrhdkibanpybeeliahpqrgelvijpmexedethbjtimpyfqtgwpmusugapw"));
	this->pyxeztbxdoyudmkyv(13643, string("khuijuefvokytoxkamybhd"), true, string("chczxjdaqoznfjykfcatnpcmwgahgxaddupstgyqrnzwqlponoktniajroxlmxupltptcfbivvyqnkgaxmuqvdgemgtyup"), string("tcdawifcnqvtmcxthzwpulnetfezpkznthaymzllpqjludgxl"), 1041, string("ownpbubylhxhzdflwstyetgpvdwvphfidwmjrzfewaqqthigxwz"), 1112, 6769);
	this->ircubfzsouwcmkflsksu(38490);
	this->kvbasytpwjlqyeeah(true, 17747);
	this->vfleetoyekvyatwhuwj(string("pxoebmikutduwztidlbuzjrezstmecucdcaabjkmplxhpbutefaplhwzrnpnhyyxxxlrcfgsvcomzawr"), 3984, true, string("qoxzdsdramwwapbgbrhmdz"), string("fsituqzvyhmscoxbcyjuzmrqfzkecaureuwx"));
}

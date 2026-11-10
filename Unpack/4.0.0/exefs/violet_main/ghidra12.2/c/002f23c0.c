/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f23c0; name: FUN_002f23c0
 */


void FUN_002f23c0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((param_2 == (long *)0x0) || (iVar1 = strcmp((char *)*param_2,"invalid"), iVar1 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0xc0);
  if (plVar2 != (long *)0x0) {
    lVar4 = param_2[1];
    lVar3 = *param_2;
    lVar6 = param_2[3];
    lVar5 = param_2[2];
    plVar2[2] = (long)"Oauth2";
    *(undefined4 *)(plVar2 + 3) = 2;
    *plVar2 = (long)(PTR_DAT_047cc990 + 0x10);
    plVar2[1] = 1;
    plVar2[8] = 0;
    auVar7 = FUN_0038dd70(0);
    *(undefined1 (*) [16])(plVar2 + 9) = auVar7;
    *(undefined1 *)(plVar2 + 0xb) = 0;
    plVar2[0xc] = 0;
    FUN_003581e0();
    auVar7 = FUN_00357fe0();
    *(undefined1 (*) [16])(plVar2 + 0xe) = auVar7;
    FUN_0038db00(plVar2 + 4);
    FUN_0034edf0(plVar2 + 0xd);
    *plVar2 = (long)(PTR_DAT_047cc998 + 0x10);
    plVar2[0x11] = lVar4;
    plVar2[0x10] = lVar3;
    plVar2[0x13] = lVar6;
    plVar2[0x12] = lVar5;
  }
  *param_1 = plVar2;
  return;
}



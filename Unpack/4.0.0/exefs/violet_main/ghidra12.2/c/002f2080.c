/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f2080; name: FUN_002f2080
 */


long * FUN_002f2080(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0xa0);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0x13] = 0;
    plVar2[0x12] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[2] = (long)"Oauth2";
    *(undefined4 *)(plVar2 + 3) = 2;
    puVar1 = PTR_DAT_047cc990 + 0x10;
    plVar2[8] = 0;
    *plVar2 = (long)puVar1;
    plVar2[1] = 1;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    auVar3 = FUN_0038dd70(0);
    *(undefined1 (*) [16])(plVar2 + 9) = auVar3;
    *(undefined1 *)(plVar2 + 0xb) = 0;
    plVar2[0xc] = 0;
    FUN_003581e0();
    auVar3 = FUN_00357fe0();
    *(undefined1 (*) [16])(plVar2 + 0xe) = auVar3;
    FUN_0038db00(plVar2 + 4);
    FUN_0034edf0(plVar2 + 0xd);
    *plVar2 = (long)&PTR_FUN_04493db8;
  }
  return plVar2;
}



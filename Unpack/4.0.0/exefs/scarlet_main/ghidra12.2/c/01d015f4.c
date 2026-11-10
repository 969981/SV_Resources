/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d015f4; name: FUN_01d015f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d015f4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0481c760 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481c760);
      if (iVar1 != 0) {
        DAT_0481c580 = PTR_DAT_047cfbb0 + 0x10;
        FUN_01cfa5b0(&DAT_0481c588,9);
        FUN_01cfa5b0(&DAT_0481c5a8,0x29);
        DAT_0481c5c8 = _DAT_00000049;
        FUN_01d01dc4(&DAT_0481c5d0,0x51);
        FUN_01d01dc4(&DAT_0481c5f0,0x71);
        DAT_0481c618 = DAT_00000099;
        DAT_0481c610 = _DAT_00000091;
        FUN_01d01e08(&DAT_0481c620,0xa1);
        FUN_01d01e70(&DAT_0481c640,0xc1);
        FUN_01cfa5b0(&DAT_0481c660,0xe1);
        FUN_01cfa5b0(&DAT_0481c680,0x101);
        DAT_0481c6a8 = _DAT_00000129;
        DAT_0481c6a0 = _DAT_00000121;
        FUN_01cfa5b0(&DAT_0481c6b0,0x131);
        DAT_0481c6d0 = _DAT_00000151;
        FUN_01d01e08(&DAT_0481c6d8,0x159);
        DAT_0481c708 = DAT_00000189;
        DAT_0481c6f8 = _DAT_00000179;
        DAT_0481c700 = _DAT_00000181;
        FUN_01d01ed8(&DAT_0481c710,0x191);
        memcpy(&DAT_0481c718,(void *)0x199,0x28);
        FUN_01cfa5b0(&DAT_0481c740,0x1c1);
        FUN_00100190(&LAB_01cfa40c,&DAT_0481c580,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0481c760);
      }
      puVar2 = &DAT_0481c580;
    }
    else {
      puVar2 = &DAT_0481c580;
    }
  }
  return puVar2;
}



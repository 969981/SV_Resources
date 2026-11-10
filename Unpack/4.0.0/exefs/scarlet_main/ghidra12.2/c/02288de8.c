/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02288de8; name: FUN_02288de8
 */


undefined1  [16] FUN_02288de8(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  cVar2 = DAT_04843b30;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = PTR_DAT_047d3ba0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  puVar1 = &LAB_00fe4dd0;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  fVar5 = (float)FUN_0228bcdc(param_1,puVar1,0,puVar4);
  auVar6._0_8_ = (double)fVar5;
  auVar6._8_8_ = 0;
  return auVar6;
}



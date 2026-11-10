/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045c340; name: FUN_0045c340
 */


undefined4 FUN_0045c340(char *param_1)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_88 [2];
  char **local_80;
  char *local_78 [5];
  
  local_78[0] = param_1;
  if (DAT_047f19f0 != 0) {
    local_88[0] = 1;
    local_80 = local_78;
    lVar3 = FUN_00451a40(DAT_047f19f0,local_88);
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(lVar3 + 8);
LAB_0045c408:
      return *(undefined4 *)(ppuVar4 + 2);
    }
  }
  __s1 = local_78[0];
  iVar5 = 0;
  iVar6 = 0x4a2;
  do {
    iVar7 = iVar5 + iVar6;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
    uVar1 = *(uint *)(&DAT_03cfc9dc + (long)iVar7 * 4);
    iVar2 = strcmp(__s1,(&PTR_s_UNDEF_044aa1c8)[(ulong)uVar1 * 5]);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        ppuVar4 = &PTR_s_UNDEF_044aa1c8 + (ulong)uVar1 * 5;
        goto LAB_0045c408;
      }
      iVar5 = iVar7 + 1;
      iVar7 = iVar6;
    }
    iVar6 = iVar7;
    if (iVar7 <= iVar5) {
      return 0;
    }
  } while( true );
}



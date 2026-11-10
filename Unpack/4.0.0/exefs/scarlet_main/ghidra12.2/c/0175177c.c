/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175177c; name: FUN_0175177c
 */


void FUN_0175177c(undefined8 *param_1,long param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  int local_40 [4];
  byte local_14 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((*(long *)(lVar3 + 0x70) != 0) && (*(long *)PTR_DAT_047d0860 != 0)) {
    local_14[0] = 0xfd;
    FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,*param_3);
    if ((local_14[0] == 0xfd) ||
       ((local_40[0] != 0 ||
        (uVar2 = (uint)local_14[0], DAT_045dfcb0 < local_14[0] || DAT_045dfcb0 == uVar2))))
    goto LAB_017517dc;
    puVar4 = *(ushort **)(param_2 + 0x4058);
    puVar5 = *(ushort **)(param_2 + 0x4060);
    if (puVar4 == puVar5) {
LAB_0175186c:
      if (puVar4 != puVar5) goto LAB_017518b8;
    }
    else {
      do {
        if ((*(int *)(puVar4 + 0x3c) == param_4) && ((*puVar4 & 3) == uVar2)) goto LAB_0175186c;
        puVar4 = puVar4 + 0x58;
      } while (puVar5 != puVar4);
    }
    puVar4 = *(ushort **)(param_2 + 0x4090);
    puVar5 = *(ushort **)(param_2 + 0x4098);
    if (puVar4 == puVar5) {
LAB_017518b0:
      if (puVar4 != puVar5) {
LAB_017518b8:
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00ca1a48(param_1,puVar4 + 4);
        return;
      }
    }
    else {
      do {
        if ((*(int *)(puVar4 + 0x3c) == param_4) && ((*puVar4 & 3) == uVar2)) goto LAB_017518b0;
        puVar4 = puVar4 + 0xe4;
      } while (puVar5 != puVar4);
    }
  }
LAB_017517dc:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



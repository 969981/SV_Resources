/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e47950; name: FUN_00e47950
 */


ulong FUN_00e47950(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047dbd88 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047dbd88);
    puVar1 = PTR_DAT_047dbd90;
    if (iVar3 != 0) {
      iVar3 = *(int *)PTR_DAT_047dbd50;
      *(int *)PTR_DAT_047dbd50 = iVar3 + 1;
      *(int *)puVar1 = iVar3;
      __cxa_guard_release(PTR_DAT_047dbd88);
    }
  }
  iVar3 = *(int *)PTR_DAT_047dbd90;
  if (*(int *)(param_1 + 0x30) == iVar3) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0xa8) == iVar3) {
    uVar4 = 0x100000000;
  }
  else if (*(int *)(param_1 + 0x120) == iVar3) {
    uVar4 = 0x200000000;
  }
  else if (*(int *)(param_1 + 0x198) == iVar3) {
    uVar4 = 0x300000000;
  }
  else if (*(int *)(param_1 + 0x210) == iVar3) {
    uVar4 = 0x400000000;
  }
  else if (*(int *)(param_1 + 0x288) == iVar3) {
    uVar4 = 0x500000000;
  }
  else if (*(int *)(param_1 + 0x300) == iVar3) {
    uVar4 = 0x600000000;
  }
  else if (*(int *)(param_1 + 0x378) == iVar3) {
    uVar4 = 0x700000000;
  }
  else if (*(int *)(param_1 + 0x3f0) == iVar3) {
    uVar4 = 0x800000000;
  }
  else if (*(int *)(param_1 + 0x468) == iVar3) {
    uVar4 = 0x900000000;
  }
  else if (*(int *)(param_1 + 0x4e0) == iVar3) {
    uVar4 = 0xa00000000;
  }
  else if (*(int *)(param_1 + 0x558) == iVar3) {
    uVar4 = 0xb00000000;
  }
  else if (*(int *)(param_1 + 0x5d0) == iVar3) {
    uVar4 = 0xc00000000;
  }
  else if (*(int *)(param_1 + 0x648) == iVar3) {
    uVar4 = 0xd00000000;
  }
  else if (*(int *)(param_1 + 0x6c0) == iVar3) {
    uVar4 = 0xe00000000;
  }
  else if (*(int *)(param_1 + 0x738) == iVar3) {
    uVar4 = 0xf00000000;
  }
  else if (*(int *)(param_1 + 0x7b0) == iVar3) {
    uVar4 = 0x1000000000;
  }
  else if (*(int *)(param_1 + 0x828) == iVar3) {
    uVar4 = 0x1100000000;
  }
  else if (*(int *)(param_1 + 0x8a0) == iVar3) {
    uVar4 = 0x1200000000;
  }
  else if (*(int *)(param_1 + 0x918) == iVar3) {
    uVar4 = 0x1300000000;
  }
  else if (*(int *)(param_1 + 0x990) == iVar3) {
    uVar4 = 0x1400000000;
  }
  else if (*(int *)(param_1 + 0xa08) == iVar3) {
    uVar4 = 0x1500000000;
  }
  else if (*(int *)(param_1 + 0xa80) == iVar3) {
    uVar4 = 0x1600000000;
  }
  else if (*(int *)(param_1 + 0xaf8) == iVar3) {
    uVar4 = 0x1700000000;
  }
  else if (*(int *)(param_1 + 0xb70) == iVar3) {
    uVar4 = 0x1800000000;
  }
  else if (*(int *)(param_1 + 0xbe8) == iVar3) {
    uVar4 = 0x1900000000;
  }
  else if (*(int *)(param_1 + 0xc60) == iVar3) {
    uVar4 = 0x1a00000000;
  }
  else if (*(int *)(param_1 + 0xcd8) == iVar3) {
    uVar4 = 0x1b00000000;
  }
  else if (*(int *)(param_1 + 0xd50) == iVar3) {
    uVar4 = 0x1c00000000;
  }
  else if (*(int *)(param_1 + 0xdc8) == iVar3) {
    uVar4 = 0x1d00000000;
  }
  else {
    if (*(int *)(param_1 + 0xe40) != iVar3) {
      bVar2 = *(int *)(param_1 + 0xeb8) == iVar3;
      uVar5 = (ulong)bVar2;
      uVar4 = 0x1f00000000;
      if (!bVar2) {
        uVar4 = 0x2000000000;
      }
      goto LAB_00e47b14;
    }
    uVar4 = 0x1e00000000;
  }
  uVar5 = 1;
LAB_00e47b14:
  return uVar5 | uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4a780; name: FUN_00e4a780
 */


ulong FUN_00e4a780(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047dbd68 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047dbd68);
    puVar1 = PTR_DAT_047dbd70;
    if (iVar2 != 0) {
      iVar2 = *(int *)PTR_DAT_047dbd50;
      *(int *)PTR_DAT_047dbd50 = iVar2 + 1;
      *(int *)puVar1 = iVar2;
      __cxa_guard_release(PTR_DAT_047dbd68);
    }
  }
  piVar4 = (int *)(param_1 + 0x30);
  if (*piVar4 == -1) {
    uVar5 = 0;
  }
  else {
    piVar4 = (int *)(param_1 + 0xa8);
    if (*piVar4 == -1) {
      uVar5 = 0x100000000;
    }
    else if (*(int *)(param_1 + 0x120) == -1) {
      piVar4 = (int *)(param_1 + 0x120);
      uVar5 = 0x200000000;
    }
    else if (*(int *)(param_1 + 0x198) == -1) {
      piVar4 = (int *)(param_1 + 0x198);
      uVar5 = 0x300000000;
    }
    else if (*(int *)(param_1 + 0x210) == -1) {
      piVar4 = (int *)(param_1 + 0x210);
      uVar5 = 0x400000000;
    }
    else if (*(int *)(param_1 + 0x288) == -1) {
      piVar4 = (int *)(param_1 + 0x288);
      uVar5 = 0x500000000;
    }
    else if (*(int *)(param_1 + 0x300) == -1) {
      piVar4 = (int *)(param_1 + 0x300);
      uVar5 = 0x600000000;
    }
    else if (*(int *)(param_1 + 0x378) == -1) {
      piVar4 = (int *)(param_1 + 0x378);
      uVar5 = 0x700000000;
    }
    else if (*(int *)(param_1 + 0x3f0) == -1) {
      piVar4 = (int *)(param_1 + 0x3f0);
      uVar5 = 0x800000000;
    }
    else if (*(int *)(param_1 + 0x468) == -1) {
      piVar4 = (int *)(param_1 + 0x468);
      uVar5 = 0x900000000;
    }
    else if (*(int *)(param_1 + 0x4e0) == -1) {
      piVar4 = (int *)(param_1 + 0x4e0);
      uVar5 = 0xa00000000;
    }
    else if (*(int *)(param_1 + 0x558) == -1) {
      piVar4 = (int *)(param_1 + 0x558);
      uVar5 = 0xb00000000;
    }
    else if (*(int *)(param_1 + 0x5d0) == -1) {
      piVar4 = (int *)(param_1 + 0x5d0);
      uVar5 = 0xc00000000;
    }
    else if (*(int *)(param_1 + 0x648) == -1) {
      piVar4 = (int *)(param_1 + 0x648);
      uVar5 = 0xd00000000;
    }
    else if (*(int *)(param_1 + 0x6c0) == -1) {
      piVar4 = (int *)(param_1 + 0x6c0);
      uVar5 = 0xe00000000;
    }
    else if (*(int *)(param_1 + 0x738) == -1) {
      piVar4 = (int *)(param_1 + 0x738);
      uVar5 = 0xf00000000;
    }
    else if (*(int *)(param_1 + 0x7b0) == -1) {
      piVar4 = (int *)(param_1 + 0x7b0);
      uVar5 = 0x1000000000;
    }
    else if (*(int *)(param_1 + 0x828) == -1) {
      piVar4 = (int *)(param_1 + 0x828);
      uVar5 = 0x1100000000;
    }
    else if (*(int *)(param_1 + 0x8a0) == -1) {
      piVar4 = (int *)(param_1 + 0x8a0);
      uVar5 = 0x1200000000;
    }
    else if (*(int *)(param_1 + 0x918) == -1) {
      piVar4 = (int *)(param_1 + 0x918);
      uVar5 = 0x1300000000;
    }
    else if (*(int *)(param_1 + 0x990) == -1) {
      piVar4 = (int *)(param_1 + 0x990);
      uVar5 = 0x1400000000;
    }
    else if (*(int *)(param_1 + 0xa08) == -1) {
      piVar4 = (int *)(param_1 + 0xa08);
      uVar5 = 0x1500000000;
    }
    else if (*(int *)(param_1 + 0xa80) == -1) {
      piVar4 = (int *)(param_1 + 0xa80);
      uVar5 = 0x1600000000;
    }
    else if (*(int *)(param_1 + 0xaf8) == -1) {
      piVar4 = (int *)(param_1 + 0xaf8);
      uVar5 = 0x1700000000;
    }
    else if (*(int *)(param_1 + 0xb70) == -1) {
      piVar4 = (int *)(param_1 + 0xb70);
      uVar5 = 0x1800000000;
    }
    else if (*(int *)(param_1 + 0xbe8) == -1) {
      piVar4 = (int *)(param_1 + 0xbe8);
      uVar5 = 0x1900000000;
    }
    else if (*(int *)(param_1 + 0xc60) == -1) {
      piVar4 = (int *)(param_1 + 0xc60);
      uVar5 = 0x1a00000000;
    }
    else if (*(int *)(param_1 + 0xcd8) == -1) {
      piVar4 = (int *)(param_1 + 0xcd8);
      uVar5 = 0x1b00000000;
    }
    else if (*(int *)(param_1 + 0xd50) == -1) {
      piVar4 = (int *)(param_1 + 0xd50);
      uVar5 = 0x1c00000000;
    }
    else if (*(int *)(param_1 + 0xdc8) == -1) {
      piVar4 = (int *)(param_1 + 0xdc8);
      uVar5 = 0x1d00000000;
    }
    else {
      if (*(int *)(param_1 + 0xe40) != -1) {
        uVar3 = 0;
        uVar5 = 0x1f00000000;
        goto LAB_00e4a7c4;
      }
      piVar4 = (int *)(param_1 + 0xe40);
      uVar5 = 0x1e00000000;
    }
  }
  *piVar4 = *(int *)PTR_DAT_047dbd70;
  uVar3 = 1;
LAB_00e4a7c4:
  return uVar3 | uVar5;
}



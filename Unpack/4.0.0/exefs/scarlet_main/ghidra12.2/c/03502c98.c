/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03502c98; name: FUN_03502c98
 */


undefined8 * FUN_03502c98(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = PTR_DAT_047e6ce8;
  if (*(long *)(PTR_DAT_047e6ce8 + 0x58) != 0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e7460);
  }
  uVar1 = *(uint *)(param_1 + 0x168);
  uVar7 = *(uint *)(param_1 + 0x16c);
  if (uVar1 < uVar7) {
LAB_03502d00:
    if (uVar1 < uVar7) {
      uVar7 = *(uint *)(param_1 + 0x168);
      lVar8 = *(long *)(param_1 + 0x160);
      *(uint *)(param_1 + 0x168) = uVar7 + 1;
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(lVar8 + (ulong)uVar7 * 0x30);
        lVar8 = lVar8 + (ulong)uVar7 * 0x30;
        *(undefined4 *)(lVar8 + 8) = 0;
        *puVar9 = 0;
        *(undefined8 *)(lVar8 + 0xc) = 0x2b;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        puVar3 = PTR_DAT_047e6d08;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        if (*(long *)(param_1 + 8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x184);
        }
        iVar4 = FUN_035012ec(puVar9,param_2,param_3,*(undefined4 *)puVar3,uVar6);
        if (iVar4 == 1) {
          FUN_0350247c(param_1,0xff,0,(*(uint *)(param_1 + 0x158) & 0xf00) == 0x300,puVar9);
        }
        else {
          uVar5 = (ulong)*(uint *)(param_1 + 0x168);
          lVar8 = *(long *)(param_1 + 0x160);
          if (1 < *(uint *)(param_1 + 0x168)) {
            FUN_03504a74(lVar8 + (ulong)uVar1 * 0x30,lVar8 + uVar5 * 0x30 + -0x30);
            uVar5 = (ulong)*(uint *)(param_1 + 0x168);
            lVar8 = *(long *)(param_1 + 0x160);
          }
          FUN_0350499c(lVar8 + uVar5 * 0x30 + -0x30);
          puVar9 = (undefined8 *)0x0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        goto LAB_03502d64;
      }
    }
  }
  else {
    iVar4 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar4 = 1;
    }
    uVar5 = FUN_035093b0(param_1 + 0x160,iVar4);
    if ((uVar5 & 1) != 0) {
      uVar7 = *(uint *)(param_1 + 0x16c);
      goto LAB_03502d00;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_03502d64:
  if (*(long *)(puVar2 + 0x58) != 0) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e7460);
  }
  return puVar9;
}



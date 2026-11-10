/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034605e0; name: FUN_034605e0
 */


void FUN_034605e0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  puVar6 = PTR_DAT_047e2fd0;
  iVar7 = *(int *)(param_2 + 0x34);
  do {
    if (iVar7 == 0) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
      return;
    }
    *(uint *)(param_2 + 0x34) = iVar7 - 1U;
    uVar4 = *(uint *)(*(long *)(param_2 + 0x20) + (ulong)(iVar7 - 1U) * 0xc);
    if ((uVar4 != 0) && (uVar3 = *(uint *)(param_1 + 0x98), uVar3 != 0)) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar4 / uVar3;
      }
      uVar15 = (ulong)(uVar4 - uVar5 * uVar3);
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar15 * 8);
      if (puVar14 != (undefined8 *)0x0) {
        if (*(uint *)(puVar14 + 1) == uVar4) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          do {
            puVar16 = puVar14;
            puVar14 = (undefined8 *)*puVar16;
            if (puVar14 == (undefined8 *)0x0) goto LAB_0346078c;
          } while (*(uint *)(puVar14 + 1) != uVar4);
        }
        uVar4 = *(uint *)(puVar14 + 5);
        uVar8 = (ulong)uVar4;
        if (uVar4 != 0) {
          puVar10 = (undefined8 *)puVar14[4];
          if (puVar10[2] == param_2) {
            puVar12 = puVar10;
          }
          else {
            lVar11 = uVar8 * 0x18;
            puVar13 = puVar10;
            do {
              lVar11 = lVar11 + -0x18;
              if (lVar11 == 0) goto LAB_0346070c;
              puVar12 = puVar13 + 3;
              plVar1 = puVar13 + 5;
              puVar13 = puVar12;
            } while (*plVar1 != param_2);
          }
          if (uVar4 < 2) {
            iVar7 = 1;
          }
          else {
            uVar2 = puVar10[uVar8 * 3 + -3];
            uVar9 = puVar10[uVar8 * 3 + -1];
            puVar12[1] = puVar10[uVar8 * 3 + -2];
            puVar12[2] = uVar9;
            *puVar12 = uVar2;
            iVar7 = *(int *)(puVar14 + 5);
          }
          *(int *)(puVar14 + 5) = iVar7 + -1;
        }
LAB_0346070c:
        iVar7 = *(int *)(puVar14 + 6);
        *(int *)(puVar14 + 6) = iVar7 + -1;
        if (iVar7 + -1 == 0) {
          if (puVar14[2] != 0) {
            (**(code **)(puVar6 + 0x30))(*(undefined4 *)((long)puVar14 + 0x1c));
            puVar14[2] = 0;
            puVar14[3] = 0xffffffff00000000;
            if (*(int *)(puVar14 + 6) != 0) goto LAB_0346078c;
          }
          if (puVar16 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar15 * 8);
          }
          *puVar16 = *puVar14;
          if (puVar14[4] != 0) {
            *(undefined4 *)(puVar14 + 5) = 0;
            (**(code **)(puVar6 + 0x30))(0);
            puVar14[4] = 0;
            *(undefined4 *)((long)puVar14 + 0x2c) = 0;
          }
          (**(code **)(puVar6 + 0x30))(0,puVar14);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        }
      }
    }
LAB_0346078c:
    iVar7 = *(int *)(param_2 + 0x34);
  } while( true );
}



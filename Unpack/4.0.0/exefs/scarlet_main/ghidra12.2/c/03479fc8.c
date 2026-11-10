/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03479fc8; name: FUN_03479fc8
 */


int FUN_03479fc8(long param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  MutexType *pMVar14;
  undefined4 local_330 [2];
  long local_328;
  undefined8 local_320;
  undefined4 *puStack_318;
  int *local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  int iStack_2ac;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined2 local_298 [2];
  char local_293;
  undefined1 auStack_288 [112];
  undefined4 local_218;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined4 local_1f4;
  long local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined1 auStack_1c8 [256];
  undefined1 *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  long *local_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  byte local_54 [4];
  
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_0347a45c:
    iVar7 = 2;
  }
  else {
    pMVar14 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar14);
    uVar9 = *(uint *)(pMVar14 + 0x28);
    if (uVar9 != 0) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = param_2 / uVar9;
      }
      for (lVar10 = *(long *)(*(long *)(pMVar14 + 0x20) + (ulong)(param_2 - uVar3 * uVar9) * 8);
          lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
        if (*(uint *)(lVar10 + 0x10) == param_2) {
          plVar11 = (long *)(lVar10 + -8);
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar14);
          puVar5 = PTR_DAT_047e2fd0;
          local_58 = 0;
          local_70 = (long *)0x0;
          local_68 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_78 = 0;
          local_88 = 0;
          local_80 = (undefined8 *)0x0;
          local_60 = param_4;
          uStack_5c = param_5;
          local_80 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
          if (local_80 == (undefined8 *)0x0) {
            local_80 = (undefined8 *)0x0;
            (**(code **)(*plVar11 + 0x30))(plVar11);
            bVar4 = false;
            local_68 = local_68 & 0xffffffff00000000;
            iVar7 = 1;
          }
          else {
            *(undefined4 *)(local_80 + 2) = 1;
            *local_80 = 0;
            local_80[1] = 0;
            local_310 = (int *)0x0;
            local_2b4 = 0;
            local_2a0 = 0;
            local_298[0] = 0xff00;
            local_c8 = (undefined1 *)0x0;
            local_c0 = 0;
            local_1f0 = 0;
            local_1e8 = 0;
            memset(auStack_288,0,0x70);
            local_20c = 0;
            local_204 = 0;
            local_1fc = 0;
            local_214 = 0;
            local_1e8 = local_1e8 & 0xffffffff00000000;
            local_1d0 = 0;
            local_b8 = 0;
            local_218 = 0x3f800000;
            local_1f4 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            local_ab = 0;
            local_330[0] = 2;
            local_2fc = *(undefined4 *)(param_1 + 0x6c);
            uStack_2f8 = 0;
            local_308 = *(undefined8 *)(param_1 + 0x60);
            local_300 = *(undefined4 *)(param_1 + 0x68);
            local_310 = *(int **)(param_1 + 0x58);
            if (local_310 != (int *)0x0) {
              *local_310 = *local_310 + 1;
            }
            auVar2 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)param_3)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iStack_2ac = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
            local_2b0 = 0;
            local_a0 = 3;
            local_320 = *(undefined8 *)(param_1 + 0x50);
            puStack_318 = &local_60;
            local_2a8 = &local_98;
            iVar7 = *(int *)(param_1 + 0xb4);
            if (iVar7 == 0 && *(int *)(param_1 + 0x74) == 0) {
              iVar7 = *(int *)PTR_DAT_047e71c0;
              if (iVar7 == 0) {
                iVar7 = 1;
              }
              *(int *)PTR_DAT_047e71c0 = iVar7 + 1;
              *(int *)(param_1 + 0xb4) = iVar7;
            }
            local_2a0 = CONCAT44(param_2,iVar7);
            local_328 = param_1;
            if (((char)local_298[0] == -0x70) && (local_293 != '\0')) {
              local_54[0] = 1;
              if (param_1 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(param_1 + 0x10);
              }
              iVar7 = FUN_034a7e5c(plVar11,local_298,uVar8,local_54,local_320,local_2fc);
              if (iVar7 == 1) {
                local_a0 = local_a0 & 0xfe | local_54[0];
                goto LAB_0347a288;
              }
            }
            else {
LAB_0347a288:
              iVar7 = FUN_034a9828(plVar11,local_330);
              if (iVar7 == 3) {
                iVar7 = 1;
              }
              else if (iVar7 == 1) {
                iVar7 = (**(code **)(*plVar11 + 0x240))(plVar11,local_330);
              }
            }
            (**(code **)(*plVar11 + 0x30))(plVar11);
            if (local_1f0 != 0) {
              local_1e8 = local_1e8 & 0xffffffff00000000;
              (**(code **)(puVar5 + 0x30))(0);
              local_1f0 = 0;
              local_1e8 = local_1e8 & 0xffffffff;
            }
            if (local_c8 != (undefined1 *)0x0) {
              local_c0 = local_c0 & 0xffffffff00000000;
              if (auStack_1c8 != local_c8) {
                (**(code **)(puVar5 + 0x30))(0);
              }
              local_c8 = (undefined1 *)0x0;
              local_c0 = local_c0 & 0xffffffff;
            }
            piVar6 = local_310;
            if ((local_310 != (int *)0x0) &&
               (iVar1 = *local_310, *local_310 = iVar1 + -1, iVar1 + -1 == 0)) {
              uVar9 = local_310[1];
              if (uVar9 != 0) {
                uVar12 = 0;
                plVar11 = (long *)(local_310 + 4);
                do {
                  if (*plVar11 != 0) {
                    (**(code **)(puVar5 + 0x30))(0);
                    uVar9 = piVar6[1];
                  }
                  uVar12 = uVar12 + 1;
                  plVar11 = plVar11 + 4;
                } while (uVar12 < uVar9);
              }
              (**(code **)(puVar5 + 0x30))(0,piVar6);
            }
            plVar11 = local_70;
            if ((int)local_68 != 0) {
              do {
                *(int *)(*plVar11 + 0x84) = *(int *)(*plVar11 + 0x84) + -1;
                puVar13 = (undefined8 *)*plVar11;
                iVar1 = *(int *)((long)puVar13 + 0x74) + -1;
                *(int *)((long)puVar13 + 0x74) = iVar1;
                if (iVar1 == 0) {
                  (**(code **)*puVar13)(puVar13);
                  (**(code **)(puVar5 + 0x30))(0,puVar13);
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != local_70 + (local_68 & 0xffffffff));
            }
            uVar12 = local_68 >> 0x20;
            local_68 = uVar12 << 0x20;
            if (local_70 == (long *)0x0) {
              bVar4 = true;
            }
            else {
              local_68 = uVar12 << 0x20;
              (**(code **)(puVar5 + 0x30))(0,local_70);
              bVar4 = true;
              local_70 = (long *)0x0;
              local_68 = local_68 & 0xffffffff;
            }
          }
          puVar13 = local_80;
          if ((local_80 != (undefined8 *)0x0) &&
             (iVar1 = *(int *)(local_80 + 2), *(int *)(local_80 + 2) = iVar1 + -1, iVar1 + -1 == 0))
          {
            FUN_034783fc(local_80);
            (**(code **)(puVar5 + 0x30))(0,puVar13);
          }
          if (bVar4) {
            return iVar7;
          }
          goto LAB_0347a45c;
        }
      }
    }
    nn::os::UnlockMutex(pMVar14);
    iVar7 = 0xf;
  }
  return iVar7;
}



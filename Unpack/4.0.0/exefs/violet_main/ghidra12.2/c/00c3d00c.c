/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c3d00c; name: FUN_00c3d00c
 */


undefined8 FUN_00c3d00c(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  ulong local_78 [3];
  
  uVar5 = FUN_00c3d340();
  if ((uVar5 & 1) == 0) {
LAB_00c3d248:
    uVar7 = 0;
  }
  else {
    bVar3 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar9 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar5 = uVar9;
    if (!bVar3) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar5 == 1) {
      lVar8 = tpidr_el0;
      do {
        local_78[0] = CONCAT53(local_78[0]._3_5_,0x2e02);
        if (bVar3) {
          if (*(char *)(param_1 + 0x31) != '.') break;
          pcVar10 = (char *)((ulong)local_78 | 2);
          pcVar11 = (char *)(param_1 + 0x32);
          while (uVar9 = uVar9 - 1, uVar9 != 0) {
            cVar1 = *pcVar10;
            cVar2 = *pcVar11;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
            if (cVar2 != cVar1) goto LAB_00c3d238;
          }
        }
        else if (**(char **)(param_1 + 0x40) != '.') break;
        FUN_00c2f698(param_1 + 0x28);
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        uVar9 = FUN_00c3d340(param_1,local_78);
        uVar5 = local_78[2];
        if ((uVar9 & 1) == 0) {
          if (((local_78[0] & 1) != 0) && (local_78[2] != 0)) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,uVar5,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,uVar5,0,8);
            }
          }
          goto LAB_00c3d248;
        }
        std::string::append(param_2);
        uVar5 = (ulong)local_78 | 1;
        if ((local_78[0] & 1) != 0) {
          uVar5 = local_78[2];
        }
        std::string::append(param_2,uVar5);
        uVar5 = local_78[2];
        if (((local_78[0] & 1) != 0) && (local_78[2] != 0)) {
          plVar12 = *(long **)(lVar8 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar8 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,uVar5,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,uVar5,0,8);
          }
        }
        bVar3 = (*(byte *)(param_1 + 0x30) & 1) == 0;
        uVar9 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
        uVar5 = uVar9;
        if (!bVar3) {
          uVar5 = *(ulong *)(param_1 + 0x38);
        }
      } while (uVar5 == 1);
    }
LAB_00c3d238:
    uVar7 = 1;
  }
  return uVar7;
}



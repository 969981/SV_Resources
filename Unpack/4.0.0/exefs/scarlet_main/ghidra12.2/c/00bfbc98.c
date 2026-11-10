/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfbc98; name: FUN_00bfbc98
 */


void FUN_00bfbc98(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long *plVar12;
  long local_78;
  undefined8 local_70;
  uint *local_68;
  
  local_78 = *param_2;
  local_68 = (uint *)0x0;
  local_70 = 0;
  FUN_00be295c(&local_78,param_1);
  uVar9 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    do {
      puVar10 = puVar10 + 1;
      pbVar11 = (byte *)*puVar10;
      if ((*pbVar11 & 1) == 0) {
        pbVar11[0] = 0;
        pbVar11[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar11 + 0x10) = 0;
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00be295c(param_1,param_2);
  uVar8 = *(uint *)(param_2 + 1);
  uVar9 = (ulong)uVar8;
  if (0 < (int)uVar8) {
    puVar10 = (undefined8 *)param_2[2];
    do {
      puVar10 = puVar10 + 1;
      pbVar11 = (byte *)*puVar10;
      if ((*pbVar11 & 1) == 0) {
        pbVar11[0] = 0;
        pbVar11[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar11 + 0x10) = 0;
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *(undefined4 *)(param_2 + 1) = 0;
    uVar8 = 0;
  }
  puVar4 = (uint *)param_2[2];
  param_2[2] = (long)local_68;
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_2 + 1) = (undefined4)local_70;
  *(undefined4 *)((long)param_2 + 0xc) = local_70._4_4_;
  local_70 = CONCAT44(uVar1,uVar8);
  if ((puVar4 != (uint *)0x0) && (local_78 == 0)) {
    uVar9 = (ulong)*puVar4;
    local_68 = puVar4;
    if (0 < (int)*puVar4) {
      lVar2 = tpidr_el0;
      do {
        puVar4 = puVar4 + 2;
        pbVar11 = *(byte **)puVar4;
        if (pbVar11 != (byte *)0x0) {
          if (((*pbVar11 & 1) != 0) && (lVar6 = *(long *)(pbVar11 + 0x10), lVar6 != 0)) {
            plVar12 = *(long **)(lVar2 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar2 + 0x30) = DAT_04859430;
            }
            uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar6,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar6,0,8);
            }
          }
          plVar12 = *(long **)(lVar2 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,pbVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,pbVar11,0,8);
          }
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (local_68 == (uint *)0x0) {
        return;
      }
    }
    operator_delete__(local_68);
  }
  return;
}



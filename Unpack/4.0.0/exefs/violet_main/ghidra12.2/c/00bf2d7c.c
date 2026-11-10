/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf2d7c; name: FUN_00bf2d7c
 */


void FUN_00bf2d7c(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x1;
  long extraout_x1_00;
  byte *pbVar11;
  byte local_68 [16];
  long local_58;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  plVar5 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar6;
  local_68[0] = 6;
  local_68[1] = 0x6b;
  local_68[2] = 0x65;
  local_68[3] = 0x79;
  local_68[4] = 0;
  FUN_00b7cb3c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x68) + 0x10) + 0x98),
               *(long *)(param_3 + 0x68),local_68,2);
  puVar2 = PTR_DAT_047dad58;
  lVar9 = extraout_x1;
  if (*(char *)(extraout_x1 + 0x44) != '\0') {
    lVar9 = 0;
  }
  uVar1 = *(uint *)(lVar9 + 0x3c);
  iVar4 = *(int *)(PTR_DAT_047dad58 + (ulong)uVar1 * 4);
  if (*(int *)(param_1 + 0x18) != iVar4) {
    if ((*(int *)(param_1 + 0x18) == 9) &&
       (pbVar11 = *(byte **)(param_1 + 0x10), pbVar11 != (byte *)0x0)) {
      if (((*pbVar11 & 1) != 0) && (lVar9 = *(long *)(pbVar11 + 0x10), lVar9 != 0)) {
        lVar10 = tpidr_el0;
        plVar5 = *(long **)(lVar10 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar5,lVar9,0,8);
        }
      }
      lVar9 = tpidr_el0;
      plVar5 = *(long **)(lVar9 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,pbVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,pbVar11,0,8);
      }
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (uVar1 == 0xc || uVar1 == 9) {
      lVar9 = tpidr_el0;
      plVar5 = *(long **)(lVar9 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar8;
    }
  }
  if (((local_68[0] & 1) != 0) && (local_58 != 0)) {
    lVar9 = tpidr_el0;
    plVar5 = *(long **)(lVar9 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar9 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,local_58,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,local_58,0,8);
    }
  }
  local_68[0] = 10;
  local_68[1] = 0x76;
  local_68[2] = 0x61;
  local_68[3] = 0x6c;
  local_68[4] = 0x75;
  local_68[5] = 0x65;
  local_68[6] = 0;
  FUN_00b7cb3c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x68) + 0x10) + 0x98),
               *(long *)(param_3 + 0x68),local_68,2);
  lVar9 = extraout_x1_00;
  if (*(char *)(extraout_x1_00 + 0x44) != '\0') {
    lVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar9 + 0x3c) * 4);
                    /* WARNING: Could not recover jumptable at 0x00bf2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),param_1);
  return;
}



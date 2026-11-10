/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a566bc; name: FUN_01a566bc
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_01a566bc(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort uVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  int *local_48;
  int *local_40;
  
  uVar3 = FUN_01a582c8(param_3);
  FUN_018dc090(&local_48,param_1,param_2);
  switch(uVar3) {
  case 0:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "Id";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 1:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "Price";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  default:
    goto switchD_01a56718_caseD_2;
  case 3:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "BP";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 5:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "EquipEffect";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 6:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "EquipPower";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 7:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "PluckEffect";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 8:
    local_68 = (char *)0x9237ef57be9ac5ca;
    pcStack_60 = "ThrowEffect";
    local_58 = 0xb;
    goto LAB_01a5673c;
  case 9:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "ThrowPower";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 10:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "NaturalGiftPower";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 0xb:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "NaturalGiftType";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a567bc;
  case 0xf:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "FieldFunctionType";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x10:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "BattleFunctionType";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x11:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkType";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x12:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "ItemType";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
joined_r0x01a567bc:
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (local_48 == (int *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar10 = *puVar9;
    if (uVar10 < 7) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
    }
    lVar11 = *(long *)((long)PTR_DAT_047d5608 + uVar8 * 8);
    goto joined_r0x01a57ed4;
  case 0x13:
    local_68 = (char *)0xc63088f69f2f3dc4;
    pcStack_60 = "BattleUseLost";
    local_58 = 0xd;
    goto LAB_01a5673c;
  case 0x14:
    local_68 = (char *)0x5ab22d21fe04fe46;
    pcStack_60 = "NoSpend";
    local_58 = 7;
    goto LAB_01a5673c;
  case 0x15:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "SortNum";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x16:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "ItemGroup";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x17:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "GroupID";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x19:
    local_68 = (char *)0x53a02d9839767c37;
    pcStack_60 = "BattleBagSelect";
    local_58 = 0xf;
LAB_01a5673c:
    local_50 = (long *)0x0;
    uVar4 = FUN_00cf7518(&local_48,&local_68);
    if (local_50 == (long *)0x0) {
      return uVar4 & 1;
    }
    (**(code **)(*local_50 + 0x20))();
    return uVar4 & 1;
  case 0x1a:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvSleep";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a56928;
  case 0x1b:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvPoison";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
joined_r0x01a56928:
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (local_48 == (int *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar10 = *puVar9;
    if (uVar10 < 7) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
    }
    lVar11 = *(long *)((long)PTR_DAT_047d5608 + uVar8 * 8);
    goto joined_r0x01a57ed4;
  case 0x1c:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvBurn";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x1d:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvFreeze";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x1e:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvParalyze";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x1f:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvConfuse";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x20:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvMero";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x21:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkEffectGuard";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x22:
    if ((local_40 == (int *)0x0) || (*(ushort *)((long)local_40 - (long)*local_40) < 7))
    goto LAB_01a58240;
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      puVar5 = (uint *)((long)local_40 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      local_68 = "WorkRevival";
      puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (local_48 != (int *)0x0)) {
        piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
        uVar10 = *puVar9;
        if (uVar10 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
            piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
          if (uVar10 < 0xb) {
            uVar4 = 0;
LAB_01a581c8:
            iVar6 = 0;
          }
          else {
            uVar4 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
            }
            if ((uVar10 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01a581c8;
            iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          }
          if ((uVar4 < *(ushort *)((long)local_48 - (long)*local_48)) &&
             (uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4),
             uVar8 != 0)) {
            iVar6 = *(int *)((long)local_48 + uVar8);
          }
          goto LAB_01a57558;
        }
        if ((0xc < uVar10) && ((ulong)puVar9[6] != 0)) {
          iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          goto LAB_01a57558;
        }
      }
LAB_01a58240:
      iVar6 = 0;
    }
LAB_01a57558:
    bVar2 = iVar6 == 0;
    goto LAB_01a5755c;
  case 0x24:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkLevel";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x25:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkEvolutional";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x26:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkAttack";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x27:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkDefense";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x28:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkSpAttack";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x29:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkSpDefense";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x2a:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkSpeed";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x2b:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkAccuracy";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x2c:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkCritical";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x2d:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkPpUp";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x2f:
    if ((local_40 == (int *)0x0) || (*(ushort *)((long)local_40 - (long)*local_40) < 7))
    goto LAB_01a58260;
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      puVar5 = (uint *)((long)local_40 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      local_68 = "WorkPpSelTgt";
      puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (local_48 != (int *)0x0)) {
        piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
        uVar10 = *puVar9;
        if (uVar10 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
            piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
          if (uVar10 < 0xb) {
            uVar4 = 0;
LAB_01a581d4:
            iVar6 = 0;
          }
          else {
            uVar4 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
            }
            if ((uVar10 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01a581d4;
            iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          }
          if ((uVar4 < *(ushort *)((long)local_48 - (long)*local_48)) &&
             (uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4),
             uVar8 != 0)) {
            iVar6 = *(int *)((long)local_48 + uVar8);
          }
          goto LAB_01a579b0;
        }
        if ((0xc < uVar10) && ((ulong)puVar9[6] != 0)) {
          iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          goto LAB_01a579b0;
        }
      }
LAB_01a58260:
      iVar6 = 0;
    }
LAB_01a579b0:
    bVar2 = iVar6 == 1;
LAB_01a57acc:
    return (uint)bVar2;
  case 0x30:
    if ((local_40 == (int *)0x0) || (*(ushort *)((long)local_40 - (long)*local_40) < 7))
    goto LAB_01a58280;
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      puVar5 = (uint *)((long)local_40 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      local_68 = "WorkPpSelTgt";
      puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (local_48 != (int *)0x0)) {
        piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
        uVar10 = *puVar9;
        if (uVar10 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
            piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
          if (uVar10 < 0xb) {
            uVar4 = 0;
LAB_01a581e0:
            iVar6 = 0;
          }
          else {
            uVar4 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
            }
            if ((uVar10 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01a581e0;
            iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          }
          if ((uVar4 < *(ushort *)((long)local_48 - (long)*local_48)) &&
             (uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4),
             uVar8 != 0)) {
            iVar6 = *(int *)((long)local_48 + uVar8);
          }
          goto LAB_01a57ac8;
        }
        if ((0xc < uVar10) && ((ulong)puVar9[6] != 0)) {
          iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          goto LAB_01a57ac8;
        }
      }
LAB_01a58280:
      iVar6 = 0;
    }
LAB_01a57ac8:
    bVar2 = iVar6 == 2;
    goto LAB_01a57acc;
  case 0x31:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvPower";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    puVar1 = PTR_DAT_047d5608;
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (local_48 == (int *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar10 = *puVar9;
    if (uVar10 < 7) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
      if (uVar10 < 0xb) {
        uVar4 = 0;
LAB_01a581ec:
        iVar6 = 0;
      }
      else {
        uVar4 = 0;
        if ((ulong)puVar9[5] != 0) {
          uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
        }
        if ((uVar10 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01a581ec;
        iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
      }
      if ((uVar4 < *(ushort *)((long)local_48 - (long)*local_48)) &&
         (uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4), uVar8 != 0)
         ) {
        iVar6 = *(int *)((long)local_48 + uVar8);
      }
    }
    else {
      if (uVar10 < 0xd) {
        return 0;
      }
      if ((ulong)puVar9[6] == 0) {
        return 0;
      }
      iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
    }
    if (iVar6 < 1) {
      return 0;
    }
    if ((local_40 == (int *)0x0) || (*(ushort *)((long)local_40 - (long)*local_40) < 7))
    goto LAB_01a582c0;
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      puVar5 = (uint *)((long)local_40 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      local_68 = "WorkRevival";
      puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (local_48 != (int *)0x0)) {
        piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
        uVar10 = *puVar9;
        if (uVar10 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
            piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
        }
        if (*(long *)(puVar1 + uVar8 * 8) == 4) {
          if (uVar10 < 0xb) {
            uVar4 = 0;
LAB_01a58208:
            iVar6 = 0;
          }
          else {
            uVar4 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
            }
            if ((uVar10 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01a58208;
            iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          }
          if ((uVar4 < *(ushort *)((long)local_48 - (long)*local_48)) &&
             (uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4),
             uVar8 != 0)) {
            iVar6 = *(int *)((long)local_48 + uVar8);
          }
          goto LAB_01a57cf4;
        }
        if ((0xc < uVar10) && ((ulong)puVar9[6] != 0)) {
          iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[6]);
          goto LAB_01a57cf4;
        }
      }
LAB_01a582c0:
      iVar6 = 0;
    }
LAB_01a57cf4:
    bVar2 = iVar6 == 1;
LAB_01a5755c:
    return (uint)!bVar2;
  case 0x32:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusHp";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x33:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusAtk";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x34:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusDef";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x35:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusSpd";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x36:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusSAtk";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x37:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusSDef";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x38:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkStatusLimitCtrl";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    break;
  case 0x39:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkFriendly1";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (local_48 == (int *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar10 = *puVar9;
    if (uVar10 < 7) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
    }
    lVar11 = *(long *)(PTR_DAT_047d5608 + uVar8 * 8);
    goto joined_r0x01a58144;
  case 0x3a:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkFriendly2";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a58070;
  case 0x3b:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkFriendly3";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a58070;
  case 0x42:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkRecvPower";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    goto joined_r0x01a58070;
  case 0x43:
    if (local_40 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)local_40 - (long)*local_40) < 7) {
      return 0;
    }
    uVar8 = (ulong)((ushort *)((long)local_40 - (long)*local_40))[3];
    if (uVar8 == 0) {
      return 0;
    }
    puVar5 = (uint *)((long)local_40 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_68 = "WorkPpRcv";
    puVar5 = bsearch(&local_68,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
joined_r0x01a58070:
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (local_48 == (int *)0x0) {
      return 0;
    }
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar10 = *puVar9;
    if (uVar10 < 7) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
      }
    }
    if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
    }
    lVar11 = *(long *)((long)PTR_DAT_047d5608 + uVar8 * 8);
joined_r0x01a58144:
    if (lVar11 != 4) {
      if (uVar10 < 0xd) {
        return 0;
      }
      goto LAB_01a58218;
    }
    goto LAB_01a57ed8;
  }
  if ((puVar5 == (uint *)0x0) || (local_48 == (int *)0x0)) {
switchD_01a56718_caseD_2:
    return 0;
  }
  piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
  puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar10 = *puVar9;
  if (uVar10 < 7) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)0x0;
    if ((ulong)puVar9[3] != 0) {
      puVar5 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
      piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
    }
  }
  if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
  }
  lVar11 = *(long *)((long)PTR_DAT_047d5608 + uVar8 * 8);
joined_r0x01a57ed4:
  if (lVar11 != 4) {
    if (uVar10 < 0xd) {
      return 0;
    }
LAB_01a58218:
    if ((ulong)puVar9[6] == 0) {
      return 0;
    }
    return *(uint *)((long)piVar7 + (ulong)puVar9[6]);
  }
LAB_01a57ed8:
  if (uVar10 < 0xb) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar9[5] != 0) {
      uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
    }
    if ((0xc < uVar10) && ((ulong)puVar9[6] != 0)) {
      uVar13 = *(uint *)((long)piVar7 + (ulong)puVar9[6]);
      goto LAB_01a57f00;
    }
  }
  uVar13 = 0;
LAB_01a57f00:
  if (*(ushort *)((long)local_48 - (long)*local_48) <= uVar4) {
    return uVar13;
  }
  uVar8 = (ulong)*(ushort *)(((long)local_48 - (long)*local_48) + (ulong)uVar4);
  if (uVar8 == 0) {
    return uVar13;
  }
  return *(uint *)((long)local_48 + uVar8);
}



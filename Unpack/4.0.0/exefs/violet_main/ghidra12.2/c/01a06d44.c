/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a06d44; name: FUN_01a06d44
 */


void FUN_01a06d44(long param_1,long *param_2,long *param_3,undefined4 param_4,undefined1 *param_5,
                 byte *param_6,byte *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 local_90;
  long *plStack_88;
  long *local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined1 local_68;
  byte local_67;
  byte local_48;
  undefined1 local_47;
  undefined1 local_46;
  byte local_44 [4];
  
  *param_5 = 0;
  *param_6 = 0;
  param_7[2] = 0;
  param_7[0] = 10;
  param_7[1] = 0;
  param_7[4] = 0;
  param_7[5] = 0;
  param_7[6] = 0;
  param_7[7] = 0;
  param_7[8] = 5;
  param_7[9] = 0;
  param_7[10] = 0;
  param_7[0xb] = 0;
  param_7[0xc] = 0;
  param_7[0xd] = 0;
  local_44[0] = 10;
  if ((param_3 != (long *)0x0) &&
     (uVar8 = (**(code **)(*param_3 + 0x208))(param_3), (uVar8 & 1) != 0)) {
    FUN_01582534(param_1);
    uVar9 = FUN_014813ec();
    uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
    local_44[0] = FUN_010e161c(uVar9,uVar4);
    if (local_44[0] != 10) goto LAB_01a06e0c;
  }
  param_3 = (long *)FUN_01a070c4(param_1,local_44,param_2);
LAB_01a06e0c:
  iVar5 = FUN_0123ee04(param_1);
  if (iVar5 == 0) {
    FUN_0124e480(param_1);
    bVar2 = FUN_01a070a4();
    bVar3 = (**(code **)(*param_3 + 0x118))(param_3);
    if (bVar3 <= bVar2) {
      plVar10 = (long *)(**(code **)param_3[5])(param_3 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0)) {
        uVar9 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar9;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      do {
        if (plVar10 == (long *)0x0) {
LAB_01a06e8c:
          bVar2 = local_44[0];
          if (local_44[0] != 10) {
            local_70 = 0;
            local_98 = FUN_0124e480(param_1);
            local_90 = FUN_01582534(param_1);
            local_6f = 1;
            plStack_88 = param_2;
            local_80 = param_3;
            local_78 = (short)param_4;
            local_74 = FUN_01911048(param_1,param_2,param_3);
            FUN_0124e480(param_1);
            local_6c = FUN_0298a580();
            FUN_0124e480(param_1);
            lVar11 = FUN_0170aedc();
            local_68 = *(undefined1 *)(lVar11 + 0x714);
            FUN_0124e480(param_1);
            local_67 = FUN_0298a58c();
            local_67 = local_67 & 1;
            FUN_01a7e0f4(&local_48,&local_98);
            uVar9 = FUN_0124e480(param_1);
            bVar3 = FUN_0210c380(uVar9,param_3);
            bVar3 = local_48 != 0 & (bVar3 ^ 1);
            uVar4 = FUN_0297d858(param_1,param_2);
            FUN_0298a598(*(undefined8 *)(param_1 + 0x20),uVar4,bVar2,local_46,local_48,bVar3,
                         local_47,param_4);
            uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
            uVar6 = FUN_01689a40(param_1,uVar4);
            bVar1 = local_48;
            uVar7 = (**(code **)(*param_3 + 0x98))(param_3);
            *param_7 = bVar2;
            param_7[1] = bVar1;
            param_7[2] = bVar3;
            *(uint *)(param_7 + 4) = uVar7 & 0xff;
            *(uint *)(param_7 + 8) = uVar6 & 0xff;
            *(short *)(param_7 + 0xc) = (short)param_4;
            *param_6 = local_48;
          }
          *param_5 = 1;
          return;
        }
        if (plVar10 == (long *)PTR_DAT_047d3f08) {
          uVar9 = FUN_0124e480(param_1);
          uVar8 = FUN_010a9b4c(uVar9,0x20000);
          if (((uVar8 & 1) != 0) && (uVar8 = FUN_01780124(param_3), (uVar8 & 1) != 0)) {
            if (local_44[0] == 10) {
              return;
            }
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            uVar12 = 2;
            goto LAB_01a07008;
          }
          goto LAB_01a06e8c;
        }
        plVar10 = (long *)*plVar10;
      } while( true );
    }
    if (local_44[0] == 10) {
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = 1;
  }
  else {
    if (local_44[0] == 10) {
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = 0;
  }
LAB_01a07008:
  FUN_0298a564(uVar9,local_44[0],param_4,uVar12);
  return;
}



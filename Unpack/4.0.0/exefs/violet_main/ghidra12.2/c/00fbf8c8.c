/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbf8c8; name: FUN_00fbf8c8
 */


void FUN_00fbf8c8(long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long local_88;
  uint local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  uint local_60;
  long local_58;
  long local_50;
  long local_48;
  
  uVar3 = param_1[1];
  if (uVar3 < param_2) {
    uVar7 = param_2 - uVar3;
    if ((ulong)(param_1[2] * 0x40) < uVar7 || param_1[2] * 0x40 - uVar7 < uVar3) {
      local_50 = 0;
      local_48 = 0;
      local_58 = 0;
      uVar2 = FUN_01e3f234(param_1);
      FUN_01e3f274(&local_58,uVar2);
      uVar3 = param_1[1];
      local_70 = 0;
      local_50 = uVar3 + uVar7;
      local_78 = local_58;
      FUN_01e3f3f0(&local_68,*param_1,0,*param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8),uVar3 & 0x3f,
                   &local_78);
      lVar4 = *param_1;
      lVar6 = param_1[1];
      *param_1 = local_58;
      param_1[1] = local_50;
      lVar5 = param_1[2];
      param_1[2] = local_48;
      local_58 = lVar4;
      local_50 = lVar6;
      local_48 = lVar5;
      if (lVar4 != 0) {
        lVar5 = tpidr_el0;
        plVar8 = *(long **)(lVar5 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar8,lVar4,0,8);
        }
      }
    }
    else {
      local_60 = (uint)uVar3 & 0x3f;
      local_68 = *param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8);
      param_1[1] = param_2;
    }
    local_88 = local_68;
    local_80 = local_60;
    FUN_01e3f470(&local_88,uVar7,param_3 & 1);
  }
  else {
    param_1[1] = param_2;
  }
  return;
}



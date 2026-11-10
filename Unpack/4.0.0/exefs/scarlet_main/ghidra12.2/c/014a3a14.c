/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a3a14; name: FUN_014a3a14
 */


void FUN_014a3a14(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar3 = (long *)*param_5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  plVar1 = *(long **)(param_4 + 0x6cd0);
  *(long **)(param_4 + 0x6cd0) = plVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))();
    plVar3 = *(long **)(param_4 + 0x6cd0);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  local_50 = 0x7621504d451e091d;
  pcStack_48 = "L_cursor_range_00";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
    lVar2 = FUN_00c8c7b4(plVar3[0x2e],&local_50);
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3);
  }
  plVar3 = *(long **)(param_4 + 0x6cd0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  local_50 = 0x76214f4d451e076a;
  pcStack_48 = "L_cursor_range_01";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3);
    lVar2 = FUN_00c8c7b4(plVar3[0x2e],&local_50);
    (**(code **)(*plVar3 + 0x60))(plVar3);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3);
  }
  FUN_014a4c24(param_4);
  FUN_014a4368(param_4);
  FUN_014a3de8(param_4,0,0);
  FUN_014a3de8(param_4,3,0);
  FUN_014a3de8(param_4,4,0);
  FUN_014a3de8(param_4,5,0);
  local_58 = *(long **)(param_4 + 0x6cd0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x58))();
  }
  local_50 = 0xd35b05dd62413275;
  pcStack_48 = "N_pos_00";
  local_40 = 8;
  local_38 = (long *)0x0;
  uVar4 = FUN_014a3d64(&local_58,&local_50);
  *(undefined4 *)(param_4 + 0x6908) = uVar4;
  *(undefined4 *)(param_4 + 0x690c) = param_2;
  *(undefined4 *)(param_4 + 0x6910) = param_3;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x60))();
  }
  local_60 = *(long **)(param_4 + 0x6cd0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x58))();
  }
  local_50 = 0xd35b04dd624130c2;
  pcStack_48 = "N_pos_01";
  local_40 = 8;
  local_38 = (long *)0x0;
  uVar4 = FUN_014a3d64(&local_60,&local_50);
  *(undefined4 *)(param_4 + 0x6914) = uVar4;
  *(undefined4 *)(param_4 + 0x6918) = param_2;
  *(undefined4 *)(param_4 + 0x691c) = param_3;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  local_68 = *(long **)(param_4 + 0x6cd0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x58))();
  }
  local_50 = 0xc3ab4c1aea8711e4;
  pcStack_48 = "N_team_catch_00";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  FUN_01442568(0,0,0,&local_68,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  return;
}



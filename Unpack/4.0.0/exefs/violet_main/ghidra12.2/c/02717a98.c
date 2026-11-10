/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02717a98; name: FUN_02717a98
 */


void FUN_02717a98(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_c0;
  long local_b8;
  long local_b0;
  long *plStack_a8;
  char local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar6 = *(long *)(param_1 + 0x180);
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar6 != lVar1) {
    do {
      FUN_02717ed8(&local_c0,lVar6);
      local_88[0] = '\0';
      if (*(char *)(lVar6 + 0x38) != '\0') {
        local_80 = *(undefined8 *)(lVar6 + 0x40);
        local_78 = *(undefined8 *)(lVar6 + 0x48);
        local_70 = *(undefined8 *)(lVar6 + 0x50);
        local_68 = *(long **)(lVar6 + 0x58);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        local_88[0] = '\x01';
      }
      FUN_0270962c(*(undefined8 *)(param_1 + 0x30),local_88);
      if (local_88[0] != '\0') {
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_88[0] = '\0';
      }
      plVar3 = plStack_a8;
      lVar2 = local_c0;
      if (local_c0 != 0) {
        local_b8 = local_c0;
        lVar7 = local_b0 - local_c0;
        uVar4 = (**(code **)(*plStack_a8 + 0xf8))(plStack_a8);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,lVar7,1);
        }
        else {
          FUN_00c48fe8(plVar3,lVar2,lVar7,1);
        }
      }
      lVar6 = lVar6 + 0x60;
    } while (lVar6 != lVar1);
  }
  FUN_027177d0((undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xd8));
  FUN_027177d0(param_1 + 0x110,*(undefined8 *)(param_1 + 0x110));
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  FUN_0271783c(param_1 + 0x180,*(undefined8 *)(param_1 + 0x180));
  *(undefined2 *)(param_1 + 0x1b8) = 0;
  return;
}



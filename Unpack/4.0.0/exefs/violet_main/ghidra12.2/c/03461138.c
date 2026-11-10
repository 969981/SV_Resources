/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03461138; name: FUN_03461138
 */


void FUN_03461138(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    plVar5 = (long *)**(long **)(param_1 + 200);
    if (plVar5 == (long *)0x0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xd0) - 1 == uVar4) goto LAB_034611c8;
        uVar4 = uVar4 + 1;
        plVar5 = (long *)(*(long **)(param_1 + 200))[uVar4 & 0xffffffff];
      } while (plVar5 == (long *)0x0);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        (**(code **)(puVar2 + 0x30))(0,plVar5[2]);
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      do {
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        if (*(uint *)(param_1 + 0xd0) <= uVar1) {
          if (*(uint *)(param_1 + 0xd0) == 0) goto LAB_03461208;
          goto LAB_034611c8;
        }
        plVar5 = *(long **)(*(long *)(param_1 + 200) + (ulong)uVar1 * 8);
      } while (plVar5 == (long *)0x0);
    } while( true );
  }
LAB_03461208:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
LAB_034611c8:
  uVar4 = 0;
  do {
    lVar3 = *(long *)(param_1 + 200);
    plVar5 = *(long **)(lVar3 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        plVar5 = (long *)*plVar5;
        (**(code **)(puVar2 + 0x30))(0);
      } while (plVar5 != (long *)0x0);
      lVar3 = *(long *)(param_1 + 200);
    }
    *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < *(uint *)(param_1 + 0xd0));
  goto LAB_03461208;
}



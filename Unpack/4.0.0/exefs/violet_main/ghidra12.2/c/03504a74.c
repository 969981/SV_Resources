/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03504a74; name: FUN_03504a74
 */


void FUN_03504a74(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*param_1 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
  }
  lVar3 = param_2[2];
  lVar1 = param_2[1];
  *param_1 = *param_2;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x68) != 0) {
      *(undefined4 *)(lVar3 + 0x70) = 0;
      (**(code **)(**(long **)(lVar3 + 0x60) + 0x18))();
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined4 *)(lVar3 + 0x74) = 0;
    }
    if ((*(long *)(lVar3 + 0x88) != 0) && (*(char *)(lVar3 + 0x90) != '\0')) {
      (**(code **)(**(long **)(lVar3 + 0x80) + 0x18))();
      *(undefined1 *)(lVar3 + 0x90) = 0;
    }
    *(undefined8 *)(lVar3 + 0x88) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar3);
  }
  param_1[3] = param_2[3];
  param_2[3] = 0;
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(puVar2 + 0x30))(0xe,puVar4);
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01875fc4; name: FUN_01875fc4
 */


uint FUN_01875fc4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_78 [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  short local_40;
  ushort local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  char local_39;
  long local_38;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar1 = *(long *)(param_1 + 0x48);
    local_40 = *(short *)(param_2 + 4);
    local_39 = *(char *)((long)param_2 + 0x26);
    local_38 = param_2[5];
    if (lVar5 != lVar1) {
      do {
        if (((*(short *)(lVar5 + 0x20) == local_40) && (*(char *)(lVar5 + 0x26) == local_39)) &&
           (*(long *)(lVar5 + 0x28) == local_38)) goto LAB_01876030;
        lVar5 = lVar5 + 0x40;
      } while (lVar1 != lVar5);
      lVar5 = lVar1;
    }
LAB_01876030:
    uVar3 = 1;
    if (lVar1 == lVar5) {
      local_58 = *param_2;
      local_50 = (undefined4)param_2[1];
      local_4c = param_2[2];
      local_44 = (undefined4)param_2[3];
      local_3e = (ushort)*(byte *)((long)param_2 + 0x23);
      local_3c = *(undefined1 *)((long)param_2 + 0x22);
      local_3b = *(undefined1 *)((long)param_2 + 0x24);
      local_3a = *(undefined1 *)((long)param_2 + 0x25);
      FUN_016947d8(local_78);
      local_14[0] = 1;
      if (local_78[0] == (undefined8 *)0x0) {
        uVar4 = 0;
        uVar2 = 0;
      }
      else {
        FUN_01876124(auStack_18,local_14,local_78[0] + 1);
        FUN_018761e8(auStack_18,&local_58,local_78[0] + 1);
        uVar4 = *local_78[0];
        uVar2 = *(undefined4 *)(local_78[0] + 3);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x70))
                        (*(long **)(param_1 + 0x78),uVar4,uVar2);
      if ((uVar3 & 1) != 0) {
        FUN_01876994(param_1,&local_58);
      }
      FUN_01694aa8(local_78);
    }
  }
  return uVar3 & 1;
}



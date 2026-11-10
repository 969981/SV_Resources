/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125d058; name: FUN_0125d058
 */


void FUN_0125d058(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 *local_60 [4];
  undefined1 local_28 [8];
  
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    for (lVar1 = *(long *)(param_1 + 0x40); lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
      if (*(short *)(lVar1 + 0x30) != 0) {
        FUN_016947d8(local_60);
        puVar3 = local_60[0];
        local_28[0] = 3;
        if (local_60[0] != (undefined8 *)0x0) {
          FUN_01876124(&local_70,local_28,local_60[0] + 1);
        }
        local_70 = *(undefined2 *)(lVar1 + 0x20);
        local_6e = *(undefined2 *)(lVar1 + 0x30);
        local_6c = *(undefined1 *)(lVar1 + 0x26);
        local_68 = *(undefined8 *)(lVar1 + 0x28);
        if (puVar3 == (undefined8 *)0x0) {
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          FUN_0125d148(local_28,&local_70,puVar3 + 1);
          uVar5 = *puVar3;
          uVar6 = puVar3[3];
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x70))
                          (*(long **)(param_1 + 0x78),uVar5,uVar6);
        if ((uVar4 & 1) != 0) {
          *(undefined2 *)(lVar1 + 0x30) = 0;
        }
        FUN_01694aa8(local_60);
      }
    }
  }
  return;
}



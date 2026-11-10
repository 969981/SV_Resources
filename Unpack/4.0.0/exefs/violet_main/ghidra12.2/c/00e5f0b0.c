/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5f0b0; name: FUN_00e5f0b0
 */


void FUN_00e5f0b0(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 0xfb) != '\0') {
    FUN_016947d8(local_50);
    puVar2 = local_50[0];
    local_18[0] = 2;
    if (local_50[0] != (undefined8 *)0x0) {
      FUN_00e5f2bc(&local_68,local_18,local_50[0] + 1);
    }
    uVar4 = FUN_00e5f228(param_1 + 0x40);
    lVar6 = param_1 + (uVar4 & 0xff) * 0x18;
    local_68 = *(undefined8 *)(lVar6 + 0x100);
    local_60 = *(undefined8 *)(lVar6 + 0x108);
    uStack_58 = *(undefined8 *)(lVar6 + 0x110);
    if (puVar2 == (undefined8 *)0x0) {
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      FUN_00e5f248(local_18,&uStack_58,puVar2 + 1);
      FUN_00e5f248(local_18,(long)&uStack_58 + 1,puVar2 + 1);
      uVar5 = *puVar2;
      uVar1 = *(undefined4 *)(puVar2 + 3);
    }
    bVar3 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))
                      (*(long **)(param_1 + 0xd0),uVar5,uVar1);
    *(byte *)(param_1 + 0xfb) = ~bVar3 & 1;
    FUN_01694aa8(local_50);
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    FUN_016947d8(local_50);
    local_18[0] = 8;
    if (local_50[0] == (undefined8 *)0x0) {
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      FUN_00e5f2bc(&local_68,local_18,local_50[0] + 1);
      FUN_00e5f348(&local_68,param_1 + 0xfa,local_50[0] + 1);
      uVar5 = *local_50[0];
      uVar1 = *(undefined4 *)(local_50[0] + 3);
    }
    bVar3 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))
                      (*(long **)(param_1 + 0xd0),uVar5,uVar1);
    *(byte *)(param_1 + 0xfc) = ~bVar3 & 1;
    FUN_01694aa8(local_50);
  }
  return;
}



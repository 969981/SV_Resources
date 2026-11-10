/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec0e2c; name: FUN_01ec0e2c
 */


void FUN_01ec0e2c(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_78 [2];
  long local_68 [4];
  undefined8 local_48;
  undefined4 local_3c;
  undefined1 local_38 [8];
  
  if (((*(char *)(param_2 + 0x90) != '\0') ||
      ((*(long *)(param_2 + 0x78) != 0 && (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) != 0)))) &&
     (puVar6 = *(undefined8 **)(param_2 + 0x88), puVar6 != (undefined8 *)0x0)) {
    local_3c = param_4;
    local_48 = FUN_017516e8();
    cVar1 = FUN_00f41720(&local_48);
    if (cVar1 != '\x02') {
      FUN_016947d8(local_68);
      local_38[0] = 1;
      if ((local_68[0] != 0) && (FUN_011dbce8(local_78,local_38,local_68[0] + 8), local_68[0] != 0))
      {
        FUN_018b820c(local_78,&local_3c,local_68[0] + 8);
      }
      local_78[0] = param_1;
      if (local_68[0] != 0) {
        FUN_011dbc60(local_38,local_78,local_68[0] + 8);
      }
      uVar2 = FUN_011dbca0(param_2);
      local_78[0] = CONCAT44(local_78[0]._4_4_,uVar2);
      uVar3 = FUN_014c27b0(local_68);
      uVar4 = FUN_014c27c8(local_68);
      uVar5 = (**(code **)*puVar6)(puVar6,local_78,uVar3,uVar4);
      if ((uVar5 & 1) != 0) {
        FUN_01a74108(param_2 + 0x68,param_3);
      }
      FUN_01694aa8(local_68);
    }
  }
  return;
}



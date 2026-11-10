/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a7248; name: FUN_019a7248
 */


void FUN_019a7248(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_78;
  undefined8 local_70;
  long local_68 [4];
  char local_48 [8];
  
  cVar1 = FUN_01751b54();
  if (((cVar1 == '\x02') || (*(long *)(param_2 + 0x40) == 0)) ||
     (FUN_01ec28f0(local_48), local_48[0] == '\0')) {
    *param_1 = 0;
    return;
  }
  FUN_016947d8(local_68);
  local_78 = CONCAT71(local_78._1_7_,1);
  if (local_68[0] == 0) {
    uVar5 = (ulong)local_48 | 2;
  }
  else {
    FUN_01ec29b4(&local_70,&local_78,local_68[0] + 8);
    uVar5 = (ulong)local_48 | 2;
    if ((local_68[0] != 0) && (FUN_01ec2a28(&local_70,uVar5,local_68[0] + 8), local_68[0] != 0)) {
      FUN_01ec2aac(&local_70,param_3,local_68[0] + 8);
    }
  }
  plVar6 = *(long **)(param_2 + 0x40);
  uVar2 = FUN_014c27b0(local_68);
  uVar3 = FUN_014c27c8(local_68);
  uVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar2,uVar3);
  if ((uVar4 & 1) == 0) {
    local_70 = 0;
  }
  else {
    local_78 = param_2;
    FUN_01ec2b28(&local_70,*(undefined8 *)(param_2 + 8),&local_78,uVar5,param_3);
  }
  *param_1 = local_70;
  FUN_01694aa8(local_68);
  return;
}



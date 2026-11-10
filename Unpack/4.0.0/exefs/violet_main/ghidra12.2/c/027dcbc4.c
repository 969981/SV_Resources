/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dcbc4; name: FUN_027dcbc4
 */


void FUN_027dcbc4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar5;
  byte *pbVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  byte *local_40;
  byte *local_38;
  long local_30;
  long *local_28;
  
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = (long *)FUN_01cf7e20();
  local_40 = (byte *)0x0;
  local_38 = (byte *)0x0;
  local_30 = 0;
  local_28 = (long *)FUN_01cf7e20();
  local_70 = 0;
  uStack_68 = 0;
  FUN_005bd020(param_1,param_2 + 0x10,param_3,&local_60,&local_70);
  pbVar2 = local_40;
  if (local_40 != (byte *)0x0) {
    if (local_38 != local_40) {
      pbVar5 = local_38;
      do {
        pbVar4 = pbVar5 + -0x20;
        if ((*pbVar4 & 1) != 0) {
          (**(code **)(**(long **)(pbVar5 + -8) + 0x18))
                    (*(long **)(pbVar5 + -8),*(undefined8 *)(pbVar5 + -0x10),
                     *(ulong *)(pbVar5 + -0x20) & 0xfffffffffffffffe,1);
        }
        pbVar5 = pbVar4;
      } while (pbVar2 != pbVar4);
    }
    local_38 = pbVar2;
    (**(code **)(*local_28 + 0x18))(local_28,local_40,local_30 - (long)local_40,8);
  }
  lVar1 = local_60;
  if (local_60 != 0) {
    if (local_58 != local_60) {
      lVar3 = local_58;
      do {
        lVar3 = lVar3 + -0x88;
        FUN_005c97cc(&local_48,lVar3);
      } while (lVar1 != lVar3);
    }
    local_58 = lVar1;
    (**(code **)(*local_48 + 0x18))(local_48,local_60,local_50 - local_60,8);
  }
  return;
}



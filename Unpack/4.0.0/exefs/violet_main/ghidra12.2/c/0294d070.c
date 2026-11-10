/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294d070; name: FUN_0294d070
 */


void FUN_0294d070(undefined8 param_1,uint param_2,undefined1 param_3,undefined4 param_4,long param_5
                 ,uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_44;
  
  lVar1 = FUN_0294d000();
  if ((((lVar1 == 0) && (param_2 < 5)) &&
      (lVar1 = (*(code *)(&switchD_0292cedc::switchdataD_045f3ed8)[(ulong)param_2 * 2])(&local_44),
      lVar1 != 0)) &&
     (lVar1 = FUN_0124ed80(param_1,1,param_2,2,0,param_3,lVar1,local_44), lVar1 != 0)) {
    if (param_6 != 0) {
      uVar2 = 0;
      do {
        FUN_0294d154(lVar1,uVar2 & 0xffffffff,*(undefined4 *)(param_5 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (param_6 != uVar2);
    }
    FUN_0294d154(lVar1,8,param_4);
  }
  return;
}



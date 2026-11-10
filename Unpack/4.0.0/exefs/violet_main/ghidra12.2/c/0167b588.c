/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167b588; name: FUN_0167b588
 */


void FUN_0167b588(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  *(undefined1 *)(param_4 + 0x15) = 0;
  if (*(char *)((long)param_4 + 0xa6) != '\0') {
    plVar6 = (long *)*param_4;
    *(undefined1 *)(param_4 + 0x15) = 1;
    while (plVar6 != (long *)0x0) {
      uVar4 = FUN_0167b674(param_1,param_2,plVar6,param_3);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_01243584(param_1);
        uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
        uVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
        FUN_0167eba0(uVar5,uVar2,0x48,uVar3);
        FUN_0167bf08(param_4,plVar6);
      }
      bVar1 = *(byte *)(param_4 + 0x15);
      if (*(byte *)((long)param_4 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(param_4 + 0x15) = bVar1 + 1;
      plVar6 = (long *)param_4[bVar1];
    }
  }
  return;
}



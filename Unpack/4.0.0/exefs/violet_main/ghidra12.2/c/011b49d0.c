/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b49d0; name: FUN_011b49d0
 */


undefined8
FUN_011b49d0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,uint param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_154 [260];
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    iVar1 = FUN_011b4bac(param_1,param_2,param_4,param_3,auStack_154,0);
    if ((iVar1 == 1) &&
       (uVar2 = FUN_011b4ab8(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
      return uVar2;
    }
  }
  else {
    do {
      iVar1 = FUN_011b4bac(param_1,param_2,param_4,param_3,auStack_154,plVar3 + 1);
      if ((iVar1 == 1) &&
         (uVar2 = FUN_011b4ab8(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
        return uVar2;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return 2;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985abc; name: FUN_02985abc
 */


void FUN_02985abc(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [36];
  undefined2 local_34 [2];
  
  lVar1 = FUN_014813f4(param_1,*param_2);
  plVar2 = (long *)FUN_01248380(param_1,*(undefined1 *)((long)param_2 + 0x1f),
                                *(undefined1 *)(param_2 + 8));
  if (((lVar1 != 0) && (plVar2 != (long *)0x0)) &&
     (uVar3 = (**(code **)(*plVar2 + 0x200))(plVar2), (uVar3 & 1) != 0)) {
    FUN_01246154(auStack_58);
    FUN_01246154(auStack_80);
    uVar4 = FUN_01246e90(param_1);
    FUN_0293bf20(uVar4,local_34,auStack_58,auStack_80,lVar1,plVar2,
                 *(undefined1 *)((long)param_2 + 0x21));
    FUN_02985bc8(param_1,lVar1,plVar2,local_34[0],auStack_58,auStack_80);
    uVar4 = FUN_02985c84(param_1);
    FUN_02985c8c(uVar4,*(undefined1 *)((long)param_2 + 0x1f));
  }
  return;
}



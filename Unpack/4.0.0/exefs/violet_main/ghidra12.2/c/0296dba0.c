/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0296dba0; name: FUN_0296dba0
 */


undefined8 FUN_0296dba0(long param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *local_18;
  
  iVar1 = FUN_0293d8d0();
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_0293d680(param_1), iVar1 == 0 || (iVar1 = FUN_0293d680(param_1), iVar1 == 2)))) {
    plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
    local_18 = plVar2;
    uVar3 = FUN_02942330(param_1,&local_18);
    if (((uVar3 & 1) != 0) ||
       (((uVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,8), (uVar3 & 1) == 0 &&
         (uVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,0x16), (uVar3 & 1) == 0)) &&
        (uVar3 = FUN_0293d8f0(param_1,7), (uVar3 & 1) == 0)))) {
      return 1;
    }
  }
  *param_2 = 0x24;
  return 0;
}



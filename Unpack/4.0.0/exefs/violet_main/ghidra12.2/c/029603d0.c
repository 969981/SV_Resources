/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029603d0; name: FUN_029603d0
 */


long * FUN_029603d0(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  int local_70 [11];
  undefined1 local_44;
  
  piVar6 = local_70;
  local_44 = FUN_02943aa0();
  local_70[10] = 4;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  bVar2 = FUN_02943d30(param_1,local_70 + 10,local_70);
  if (bVar2 != 0) {
    uVar5 = (ulong)bVar2;
    do {
      iVar1 = *piVar6;
      if ((((iVar1 != param_2) && (uVar3 = FUN_0293d7c0(param_1,param_2,iVar1), (uVar3 & 1) != 0))
          && (uVar3 = FUN_0293d870(param_1,iVar1), (uVar3 & 1) == 0)) &&
         (((plVar4 = (long *)FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),iVar1),
           plVar4 != (long *)0x0 && ((short)plVar4[0xe2] == 0x3a3)) &&
          ((uVar3 = (**(code **)(*plVar4 + 0x208))(plVar4), (uVar3 & 1) != 0 &&
           (uVar3 = (**(code **)(*plVar4 + 0x4d0))(plVar4,0x19), (uVar3 & 1) == 0)))))) {
        return plVar4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  return (long *)0x0;
}



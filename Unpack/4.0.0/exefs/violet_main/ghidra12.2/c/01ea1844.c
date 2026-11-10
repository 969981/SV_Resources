/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea1844; name: FUN_01ea1844
 */


void FUN_01ea1844(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint local_44;
  uint *local_28;
  
  if ((*param_2 == 0) || (*(short *)(*param_2 + 0x1a) == 0)) {
    if ((char)param_2[3] == '\0') {
      return;
    }
  }
  else if (((char)param_2[3] == '\0') && ((*param_2 == 0 || (*(short *)(*param_2 + 0x1a) == 0)))) {
    puVar1 = (undefined8 *)0x0;
    goto LAB_01ea1888;
  }
  puVar1 = (undefined8 *)param_2[2];
LAB_01ea1888:
  local_44 = (**(code **)*puVar1)();
  if ((local_44 & 0xff) != 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    lVar5 = *(long *)(param_1 + 0x70);
    local_28 = &local_44;
    if ((lVar3 != lVar5) && (uVar2 = FUN_01ea194c(&local_28,lVar3), (uVar2 & 1) == 0)) {
      do {
        lVar4 = lVar3 + 0x20;
        lVar3 = lVar5;
        if (lVar5 == lVar4) break;
        uVar2 = FUN_01ea194c(&local_28,lVar4);
        lVar3 = lVar4;
      } while ((uVar2 & 1) == 0);
    }
    if (*(long *)(param_1 + 0x70) == lVar3) {
      FUN_01ea19d4((long *)(param_1 + 0x68),param_2);
    }
  }
  return;
}



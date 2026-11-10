/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d91154; name: FUN_00d91154
 */


bool FUN_00d91154(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_40 [2];
  long local_30 [2];
  
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar1 == cVar2) {
    if ((((cVar1 == '\0') || (cVar1 == '\x02')) || (cVar1 == '\x01')) || (cVar1 == '\x03')) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
    return false;
  }
  if ((cVar1 == '\x03') || (cVar2 == '\x03')) {
    FUN_00d9139c(local_30);
    FUN_00d9139c(local_40,param_2);
    FUN_00d9128c(local_40);
    FUN_00d9128c(local_30);
    return local_30[0] == local_40[0];
  }
  if (cVar1 == '\0') {
LAB_00d91234:
    lVar3 = *(long *)(param_1 + 8);
  }
  else if (cVar1 == '\x02') {
    lVar3 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar3 = 0;
      if (lVar5 != 0) {
        lVar3 = lVar5 + -0x28;
      }
    }
  }
  else {
    if (cVar1 == '\x01') goto LAB_00d91234;
    lVar3 = 0;
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x02') {
      lVar5 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10);
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar5 = lVar4 + -0x28;
        }
      }
      goto LAB_00d91274;
    }
    if (cVar2 != '\x01') {
      lVar5 = 0;
      goto LAB_00d91274;
    }
  }
  lVar5 = *(long *)(param_2 + 8);
LAB_00d91274:
  return lVar3 == lVar5;
}



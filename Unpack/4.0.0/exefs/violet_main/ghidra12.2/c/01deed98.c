/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01deed98; name: FUN_01deed98
 */


void FUN_01deed98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char local_30 [8];
  undefined8 local_28;
  
  if (*(char *)param_1[2] == '\0') {
    param_3 = *(undefined8 *)(*param_1 + 0x118);
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1 + 0xa0;
  }
  FUN_01deee70(local_30,param_2,param_3,lVar2,param_1[1],param_1[4],param_1[5]);
  pcVar3 = (char *)param_1[3];
  if (*pcVar3 == '\0') {
    if (local_30[0] != '\0') {
      *(undefined8 *)(pcVar3 + 8) = local_28;
      *pcVar3 = '\x01';
    }
  }
  else if (local_30[0] == '\0') {
    if (*(long **)(pcVar3 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(pcVar3 + 8) + 0x20))();
    }
    *pcVar3 = '\0';
  }
  else {
    plVar1 = *(long **)(pcVar3 + 8);
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
    pcVar3[0xd] = '\0';
    pcVar3[0xe] = '\0';
    pcVar3[0xf] = '\0';
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *(undefined8 *)(pcVar3 + 8) = local_28;
  }
  return;
}



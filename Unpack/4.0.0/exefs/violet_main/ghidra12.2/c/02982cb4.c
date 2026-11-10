/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982cb4; name: FUN_02982cb4
 */


void FUN_02982cb4(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  char cVar5;
  undefined8 uVar6;
  
  cVar2 = *(char *)(param_3 + 1);
  cVar5 = cVar2 != '\n';
  cVar3 = *(char *)((long)param_3 + 3);
  uVar4 = *param_3;
  if (cVar3 != '\n') {
    cVar5 = '\x02';
  }
  if (*(char *)(param_3 + 2) == '\0') {
    if (cVar5 == '\x02') {
      uVar6 = FUN_01243584();
      FUN_0298a9ac(uVar6,cVar2,cVar3,uVar4);
      return;
    }
    if (cVar5 == '\x01') {
      uVar6 = FUN_01243584();
      FUN_02986d20(uVar6,cVar2,uVar4);
      return;
    }
    if (cVar5 == '\0') {
      uVar6 = FUN_01243584();
      FUN_02980868(uVar6,uVar4);
      return;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
    if (cVar5 == '\x02') {
      uVar6 = FUN_01245ab0();
      FUN_01679624(uVar6,uVar1,0xa8,cVar2,cVar3,uVar4);
      return;
    }
    if (cVar5 == '\x01') {
      uVar6 = FUN_01245ab0();
      FUN_01679624(uVar6,uVar1,0xa7,cVar2,uVar4);
      return;
    }
    if (cVar5 == '\0') {
      uVar6 = FUN_01245ab0();
      FUN_01679624(uVar6,uVar1,0xa6,uVar4);
      return;
    }
  }
  return;
}



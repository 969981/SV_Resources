/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01251320; name: FUN_01251320
 */


void FUN_01251320(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  
  cVar3 = *(char *)((long)param_4 + 9);
  cVar1 = *(char *)(param_4 + 1);
  FUN_0124e480();
  iVar5 = FUN_01921d0c();
  if (iVar5 == 0) {
    if (cVar3 == '\0') {
      bVar2 = FUN_01a2c530(param_1,*param_4);
    }
    else {
      bVar2 = 1;
    }
    uVar6 = (**(code **)(*(long *)*param_4 + 0x98))();
    cVar3 = FUN_01689a40(param_1,uVar6);
    FUN_0124e480(param_1);
    cVar4 = FUN_0159fe8c();
    bVar7 = cVar1 != '\0' | bVar2 | cVar4 != cVar3;
  }
  else {
    bVar7 = 1;
    bVar2 = 1;
  }
  *param_2 = bVar2 & 1;
  *param_3 = bVar7 & 1;
  return;
}



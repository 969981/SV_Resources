/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987c60; name: FUN_02987c60
 */


void FUN_02987c60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_3;
  if (((char)puVar3[0x8c] == '\0') || ((*puVar3 & 0xf) != 8)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_02987d7c(param_1,0);
    puVar3 = (uint *)*param_3;
  }
  if ((*(char *)((long)puVar3 + 0x231) != '\0') && ((puVar3[0x1c] & 0xf) == 8)) {
    iVar2 = FUN_02987d7c(param_1,1);
    puVar3 = (uint *)*param_3;
    iVar1 = iVar2 + iVar1;
  }
  if ((*(char *)((long)puVar3 + 0x232) != '\0') && ((puVar3[0x38] & 0xf) == 8)) {
    iVar2 = FUN_02987d7c(param_1,2);
    puVar3 = (uint *)*param_3;
    iVar1 = iVar2 + iVar1;
  }
  if ((*(char *)((long)puVar3 + 0x233) != '\0') && ((puVar3[0x54] & 0xf) == 8)) {
    iVar2 = FUN_02987d7c(param_1,3);
    puVar3 = (uint *)*param_3;
    iVar1 = iVar2 + iVar1;
  }
  if (((char)puVar3[0x8d] != '\0') && ((puVar3[0x70] & 0xf) == 8)) {
    iVar2 = FUN_02987d7c(param_1,4);
    iVar1 = iVar2 + iVar1;
  }
  *(bool *)param_2 = 0 < iVar1;
  return;
}



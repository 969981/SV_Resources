/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348b314; name: FUN_0348b314
 */


undefined8 * FUN_0348b314(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_18;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)0x0) goto LAB_0348b3cc;
  iVar1 = *(int *)(puVar4 + 0x10);
  uVar2 = iVar1 - 1;
  *(uint *)(puVar4 + 0x10) = uVar2;
  if (iVar1 == 0 || uVar2 == 0) {
    if (uVar2 != 0) goto LAB_0348b3cc;
LAB_0348b35c:
    lVar3 = puVar4[5];
    if (lVar3 != 0) {
      uVar2 = ((uint)lVar3 ^ (uint)lVar3 >> 0x10) * -0x7a143595;
      uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
      local_18 = lVar3;
      FUN_034c6294(&DAT_048b02b8,&local_18,uVar2 ^ uVar2 >> 0x10);
      uVar2 = *(uint *)(puVar4 + 0x10);
    }
  }
  else {
    if (1 < uVar2) goto LAB_0348b3cc;
    if (*(char *)((long)puVar4 + 0x84) != '\0') goto LAB_0348b35c;
  }
  if (uVar2 == 0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar4);
  }
LAB_0348b3cc:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return param_1;
}



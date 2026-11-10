/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029eb440; name: FUN_029eb440
 */


void FUN_029eb440(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xe036727762e735bb;
  pcStack_38 = "BoolParameterChangeCallback";
  local_30 = 0x1b;
  local_28 = (long *)0x0;
  puVar1 = (undefined8 *)FUN_029ea9c8(param_1 + 0x1f8,&local_40);
  pcVar2 = (code *)puVar1[1];
  if (pcVar2 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar2)(puVar1 + 4);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar1 + 4);
    uVar3 = param_2[3];
    puVar1[1] = param_2[1];
    puVar1[3] = uVar3;
    uVar3 = *param_2;
    puVar1[2] = param_2[2];
    *puVar1 = uVar3;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}



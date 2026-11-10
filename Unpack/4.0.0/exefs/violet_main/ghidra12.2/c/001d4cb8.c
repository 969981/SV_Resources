/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d4cb8; name: FUN_001d4cb8
 */


void FUN_001d4cb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  char *__s;
  undefined8 local_58;
  
  uVar1 = *(ulong *)(param_3 + 0xf40) & 0x840;
  puVar3 = &DAT_03bdfd30;
  if (uVar1 != 0) {
    puVar3 = &DAT_03c67c74;
  }
  local_58 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    do {
      __s = (char *)*param_1;
      pcVar5 = strchr(__s,0x3a);
      if ((pcVar5 == (char *)0x0) || (pcVar5[1] != ' ')) {
        FUN_001db818(param_3,"Malformatted trailing header ! Skipping trailer.");
      }
      else {
        iVar4 = FUN_001d4a1c(&local_58,&DAT_03c8f584,__s,puVar3);
        if (iVar4 != 0) {
          return;
        }
      }
      param_1 = (undefined8 *)param_1[1];
    } while (param_1 != (undefined8 *)0x0);
  }
  uVar2 = 1;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  FUN_001d4af0(&local_58,puVar3,uVar2);
  return;
}



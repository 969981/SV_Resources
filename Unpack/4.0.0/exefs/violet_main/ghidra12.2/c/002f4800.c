/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f4800; name: FUN_002f4800
 */


byte FUN_002f4800(long param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong local_40;
  undefined8 *local_38;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = 0;
  local_38 = (undefined8 *)0x0;
  FUN_0038d490(param_3,&DAT_03c16438,&local_38,&local_40);
  uVar2 = local_40;
  if (local_40 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0;
    puVar4 = local_38;
    uVar5 = local_40;
    do {
      if ((char *)*puVar4 != (char *)0x0) {
        iVar1 = strcmp(param_2,(char *)*puVar4);
        bVar3 = bVar3 | iVar1 == 0;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    if (uVar2 != 0) {
      uVar2 = 0;
      do {
        free((void *)local_38[uVar2]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_40);
    }
  }
  free(local_38);
  return bVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049c7e0; name: FUN_0049c7e0
 */


undefined8 * FUN_0049c7e0(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *__ptr;
  char *pcVar3;
  uint uVar4;
  undefined8 local_28;
  
  __ptr = calloc(1,0x18);
  if (__ptr != (undefined8 *)0x0) {
    pcVar3 = strchr(param_2,0x72);
    uVar4 = (uint)(pcVar3 != (char *)0x0);
    pcVar3 = strchr(param_2,0x77);
    if ((pcVar3 != (char *)0x0) || (pcVar3 = strchr(param_2,0x2b), pcVar3 != (char *)0x0)) {
      uVar4 = uVar4 | 2;
    }
    pcVar3 = strchr(param_2,0x61);
    if (pcVar3 != (char *)0x0) {
      uVar4 = 7;
    }
    uVar1 = nn::fs::OpenFile((FileHandle *)&local_28,param_1,uVar4);
    if ((uVar1 == 0) ||
       (((((uVar4 & 6) != 0 && ((uVar1 & 0x3fffff) == 0x202)) &&
         (iVar2 = nn::fs::CreateFile(param_1,0), iVar2 == 0)) &&
        (iVar2 = nn::fs::OpenFile((FileHandle *)&local_28,param_1,uVar4), iVar2 == 0)))) {
      *__ptr = local_28;
      *(uint *)(__ptr + 2) = uVar4;
    }
    else {
      free(__ptr);
      __ptr = (undefined8 *)0x0;
    }
  }
  return __ptr;
}



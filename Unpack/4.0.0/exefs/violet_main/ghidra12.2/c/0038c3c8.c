/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c3c8; name: FUN_0038c3c8
 */


undefined8 FUN_0038c3c8(char *param_1,byte param_2)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  bool bVar4;
  
  iVar1 = strcmp(param_1,"all");
  if (iVar1 == 0) {
    plVar3 = *(long **)PTR_DAT_047ccfd8;
    if (plVar3 != (long *)0x0) {
      do {
        *(byte *)(plVar3 + 2) = param_2 & 1;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  else {
    iVar1 = strcmp(param_1,"list_tracers");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"refcount");
      plVar3 = *(long **)PTR_DAT_047ccfd8;
      if (iVar1 == 0) {
        if (plVar3 != (long *)0x0) {
          do {
            pcVar2 = strstr((char *)plVar3[1],"refcount");
            if (pcVar2 != (char *)0x0) {
              *(byte *)(plVar3 + 2) = param_2 & 1;
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
        }
      }
      else {
        if (plVar3 != (long *)0x0) {
          bVar4 = false;
          do {
            while (iVar1 = strcmp(param_1,(char *)plVar3[1]), iVar1 == 0) {
              *(byte *)(plVar3 + 2) = param_2 & 1;
              plVar3 = (long *)*plVar3;
              bVar4 = true;
              if (plVar3 == (long *)0x0) {
                return 1;
              }
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
          if (bVar4) {
            return 1;
          }
        }
        if (*param_1 != '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



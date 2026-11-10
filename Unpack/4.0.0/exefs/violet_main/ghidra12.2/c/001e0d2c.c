/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0d2c; name: FUN_001e0d2c
 */


undefined8 FUN_001e0d2c(char *param_1,undefined8 *param_2,int param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_38;
  
  piVar3 = __errno_location();
  *piVar3 = 0;
  *param_4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_001e0d94:
      lVar4 = strtol(param_1,&local_38,param_3);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_38;
      }
      piVar3 = __errno_location();
      if (*piVar3 == 0x22) {
        uVar5 = 1;
      }
      else if (param_1 == local_38) {
LAB_001e0de4:
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
        *param_4 = lVar4;
      }
      return uVar5;
    }
    iVar2 = FUN_001cb268(cVar1);
    if (iVar2 == 0) {
      if (*param_1 == '-') {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = param_1;
        }
        goto LAB_001e0de4;
      }
      goto LAB_001e0d94;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}



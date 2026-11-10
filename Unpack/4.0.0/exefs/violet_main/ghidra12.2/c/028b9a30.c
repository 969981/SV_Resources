/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b9a30; name: FUN_028b9a30
 */


undefined8 FUN_028b9a30(ulonglong *param_1,byte *param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  byte *local_38 [7];
  
  do {
    if (0 < param_3) {
      if ((param_4 & 1) != 0) {
        piVar1 = __errno_location();
        *piVar1 = 0;
      }
      local_38[0] = param_2;
      uVar2 = strtoull((char *)param_2,(char **)local_38,param_3);
      *param_1 = uVar2;
      if ((local_38[0] == param_2) || (*local_38[0] != 0)) {
        uVar3 = 0;
        *param_1 = 0;
      }
      else if (((param_4 & 1) == 0) || (piVar1 = __errno_location(), *piVar1 == 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
    uVar5 = (uint)*param_2;
    if (*param_2 != 0) {
      lVar4 = 1;
      do {
        if (uVar5 - 0x30 < 10) {
          if ((uVar5 == 0x30) && ((param_2[lVar4] & 0xdf) == 0x58)) {
            param_3 = 0x10;
            goto LAB_028b9ae4;
          }
          break;
        }
        uVar5 = (uint)param_2[lVar4];
        lVar4 = lVar4 + 1;
      } while (uVar5 != 0);
    }
    param_3 = 10;
LAB_028b9ae4:
    param_4 = param_4 & 1;
  } while( true );
}



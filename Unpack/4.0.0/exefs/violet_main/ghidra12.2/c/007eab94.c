/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eab94; name: FUN_007eab94
 */


void FUN_007eab94(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char acStack_130 [256];
  
  if (*param_2 != 0) {
    sprintf(acStack_130,"%08x");
    plVar1 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    uVar3 = 0;
    do {
      if (((((uint)param_2[uVar3 >> 5 & 7] >> (ulong)(uVar3 & 0x1f) & 1) != 0) &&
          (lVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3), lVar2 != 0)) &&
         (*(char *)(lVar2 + 0x78) == '\0')) {
        *(undefined8 *)(lVar2 + 0x88) = *param_3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x18);
  }
  return;
}



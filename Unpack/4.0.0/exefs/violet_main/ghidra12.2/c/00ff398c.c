/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff398c; name: FUN_00ff398c
 */


void FUN_00ff398c(undefined1 *param_1,long *param_2,char *param_3,byte *param_4)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 local_30 [16];
  
  pcVar3 = (code *)*param_2;
  uVar1 = param_2[1];
  if ((((1 < *param_4) ||
       (puVar4 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  local_30 = ZEXT816(0);
  if (((*param_3 == '\x01') || (*param_3 == '\0')) &&
     (local_30 = ZEXT816(0), *(long *)(param_3 + 8) != 0)) {
    if ((uVar1 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(param_3 + 8) + ((long)uVar1 >> 1)));
    }
    local_30 = (*pcVar3)(*puVar4);
  }
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}



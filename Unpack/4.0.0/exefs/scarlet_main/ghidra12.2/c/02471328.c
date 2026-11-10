/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02471328; name: FUN_02471328
 */


void FUN_02471328(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((((1 < *param_3) ||
       (puVar2 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar2 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar2 = (undefined8 *)PTR_DAT_047d5150,
     iVar1 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar2 + 0x38) = 0;
    *(undefined8 *)((long)puVar2 + 0x20) = 0;
    *(undefined8 *)((long)puVar2 + 0x28) = 0;
    *(undefined8 *)((long)puVar2 + 0x10) = 0;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    *puVar2 = 0;
    *(undefined8 *)((long)puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  FUN_01df5700(param_1,param_2,*puVar2,puVar2[2],puVar2[4],puVar2[6]);
  return;
}



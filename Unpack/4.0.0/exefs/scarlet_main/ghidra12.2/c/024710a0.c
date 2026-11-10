/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024710a0; name: FUN_024710a0
 */


void FUN_024710a0(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,byte *param_7)

{
  undefined *puVar1;
  int iVar2;
  
  if ((((1 < *param_7) || (*(long *)(param_7 + 8) == 0)) && ((*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar1 = PTR_DAT_047d5150, iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  FUN_02472e64((float)param_1,(float)param_2,(float)param_3,(float)param_4,(float)param_5,
               (float)param_6);
  return;
}



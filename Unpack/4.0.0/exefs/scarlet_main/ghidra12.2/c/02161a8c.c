/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02161a8c; name: FUN_02161a8c
 */


void FUN_02161a8c(long param_1)

{
  long lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x380) = 0;
  if (*(char *)(param_1 + 0x128) != '\0') {
    lVar1 = param_1 + 0x360;
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x81) = 0;
    if ((*(char *)(param_1 + 299) != '\0') && (*(char *)(param_1 + 0x12f) != '\0')) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x380) = 1;
      if (*(code **)(param_1 + 0x160) != (code *)0x0) {
        (**(code **)(param_1 + 0x160))(param_1 + 0x180);
      }
      *(undefined1 *)(param_1 + 0x12f) = 0;
    }
    if ((*(char *)(param_1 + 300) != '\0') && (*(char *)(param_1 + 0x130) != '\0')) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x381) = 1;
      if (*(code **)(param_1 + 0x1e0) != (code *)0x0) {
        (**(code **)(param_1 + 0x1e0))(param_1 + 0x200);
      }
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
    if ((*(char *)(param_1 + 0x12d) != '\0') && (*(char *)(param_1 + 0x131) != '\0')) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x382) = 1;
      if (*(code **)(param_1 + 0x260) != (code *)0x0) {
        (**(code **)(param_1 + 0x260))(param_1 + 0x280);
      }
      *(undefined1 *)(param_1 + 0x131) = 0;
    }
    if ((*(char *)(param_1 + 0x12e) != '\0') && (*(char *)(param_1 + 0x132) != '\0')) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 899) = 1;
      if (*(code **)(param_1 + 0x2e0) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e0))(param_1 + 0x300);
      }
      *(undefined1 *)(param_1 + 0x132) = 0;
    }
    *(undefined1 *)(param_1 + 0x12a) = 0;
  }
  return;
}



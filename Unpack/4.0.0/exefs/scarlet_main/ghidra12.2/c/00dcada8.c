/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dcada8; name: FUN_00dcada8
 */


void FUN_00dcada8(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x1d0) != '\0') {
switchD_00dcae70_default:
    return;
  }
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar4 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar4;
  lVar3 = *(long *)(param_1 + 0x148);
  if ((*(char *)(lVar3 + 0x52) == '\0') &&
     (*(long *)(lVar3 + 0x60) = lVar4 + 0x80, *(char *)(lVar3 + 0x90) != '\0')) {
    *(undefined8 *)(lVar3 + 0x80) = 0xfffffd8000000168;
    *(undefined8 *)(lVar3 + 0x70) = 0xfffffd8000000000;
    *(undefined8 *)(lVar3 + 0x78) = 0xfffffd8000000168;
    *(undefined4 *)(lVar3 + 0x88) = 0x168;
  }
  do {
    while (*(int *)(param_1 + 0x138) == 1) {
      if (*(int *)(param_1 + 0x13c) != 2) {
        return;
      }
      *(undefined8 *)(param_1 + 0x138) = 0x200000002;
      if (*(long *)(param_1 + 0x170) != 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x170) + 0x170) + 0x520) = 1;
      }
      if (*(long **)(param_1 + 0x228) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x228) + 8))();
      }
    }
    switch(*(int *)(param_1 + 0x138)) {
    case 2:
      uVar2 = FUN_00dcbd94(*(undefined8 *)(param_1 + 0x148),param_1 + 0x1b0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((*(long **)(param_1 + 0x228) == (long *)0x0) ||
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x228) + 0x30))(), (uVar2 & 1) != 0)) {
        *(undefined8 *)(param_1 + 0x138) = 0x300000003;
        FUN_0129ea70(*(undefined8 *)(param_1 + 0x148));
      }
      if (*(char *)(*(long *)(param_1 + 0x148) + 0x50) == '\0') {
        *(undefined8 *)(param_1 + 0x138) = 0x500000005;
      }
      if (*(long **)(param_1 + 0x228) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x228) + 0x10))();
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x13c) == 4) {
LAB_00dcafd4:
        *(undefined8 *)(param_1 + 0x138) = 0x400000004;
        FUN_0129e6b0(*(undefined8 *)(param_1 + 0x148));
        if (*(long **)(param_1 + 0x228) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x228) + 0x20))();
        }
      }
      else {
        if (*(int *)(param_1 + 0x13c) != 5) {
          FUN_00dcb098(*(undefined8 *)(param_1 + 0x148),param_2);
          if (*(char *)(*(long *)(param_1 + 0x148) + 0x50) != '\0') {
            return;
          }
          *(undefined8 *)(param_1 + 0x138) = 0x500000005;
          if (*(long **)(param_1 + 0x228) == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00dcafd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x228) + 0x18))();
          return;
        }
        *(undefined8 *)(param_1 + 0x138) = 0x500000005;
        FUN_0129e6b0(*(undefined8 *)(param_1 + 0x148));
        if (*(long **)(param_1 + 0x228) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x228) + 0x18))();
        }
      }
      break;
    case 4:
      uVar2 = FUN_00dcc00c(*(undefined8 *)(param_1 + 0x148),param_1 + 0x1b0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x138) = 0x100000001;
      if (*(long **)(param_1 + 0x228) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x228) + 0x28))();
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x13c) == 4) goto LAB_00dcafd4;
      if (*(int *)(param_1 + 0x13c) != 3) {
        FUN_00dcb098(*(undefined8 *)(param_1 + 0x148),param_2);
        if (*(char *)(*(long *)(param_1 + 0x148) + 0x50) == '\0') {
          return;
        }
        *(undefined8 *)(param_1 + 0x138) = 0x300000003;
        return;
      }
      *(undefined8 *)(param_1 + 0x138) = 0x300000003;
      FUN_0129ea70(*(undefined8 *)(param_1 + 0x148));
      break;
    default:
      goto switchD_00dcae70_default;
    }
  } while( true );
}



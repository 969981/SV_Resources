/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b5388; name: FUN_011b5388
 */


void FUN_011b5388(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *local_28;
  long *local_8;
  
  iVar5 = (int)param_3;
  if (0x2c8 < iVar5) {
    if (iVar5 < 0x3ad) {
      if (iVar5 == 0x2c9) {
        lVar6 = 8;
      }
      else {
        if (iVar5 != 0x2cb) goto switchD_011b53c8_caseD_270;
        lVar6 = 9;
      }
    }
    else {
      switch(iVar5) {
      case 0x3ad:
        lVar6 = 5;
        break;
      case 0x3ae:
      case 0x3b0:
      case 0x3b2:
        goto switchD_011b53c8_caseD_270;
      case 0x3af:
        lVar6 = 7;
        break;
      case 0x3b1:
        lVar6 = 0x23;
        break;
      case 0x3b3:
        lVar6 = 0x24;
        break;
      default:
        if (iVar5 == 0x3f1) {
          lVar6 = 0x25;
        }
        else {
          if (iVar5 != 0x3f3) goto switchD_011b53c8_caseD_270;
          lVar6 = 0x26;
        }
      }
    }
    goto switchD_011b53c8_caseD_28b;
  }
  lVar6 = 0;
  switch(iVar5) {
  case 0x26f:
    lVar6 = 0x12;
    break;
  case 0x270:
  case 0x272:
  case 0x274:
  case 0x276:
  case 0x278:
  case 0x27a:
  case 0x27c:
  case 0x27e:
  case 0x280:
  case 0x282:
  case 0x284:
  case 0x286:
  case 0x288:
  case 0x28a:
  case 0x28c:
  case 0x28e:
  case 0x290:
  case 0x292:
  case 0x294:
  case 0x296:
  case 0x298:
  case 0x29a:
  case 0x29c:
  case 0x29e:
  case 0x2a0:
  case 0x2a2:
  case 0x2a4:
  case 0x2a6:
switchD_011b53c8_caseD_270:
    param_2 = (long *)*param_2;
    local_28 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b7360(param_1,&local_28,param_3,0);
      return;
    }
    plVar1 = param_2 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_011b568c;
    FUN_011b7360(param_1,&local_28,param_3,0);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar1 = param_2 + 5;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b54f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2);
      return;
    }
    goto LAB_011b5494;
  case 0x271:
    lVar6 = 0x13;
    break;
  case 0x273:
    lVar6 = 0x10;
    break;
  case 0x275:
    lVar6 = 0x11;
    break;
  case 0x277:
    lVar6 = 0x14;
    break;
  case 0x279:
    lVar6 = 0x15;
    break;
  case 0x27b:
    lVar6 = 0xe;
    break;
  case 0x27d:
    lVar6 = 0xf;
    break;
  case 0x27f:
    lVar6 = 0x16;
    break;
  case 0x281:
    lVar6 = 0x17;
    break;
  case 0x283:
    lVar6 = 0x18;
    break;
  case 0x285:
    lVar6 = 0x19;
    break;
  case 0x287:
    lVar6 = 0x1a;
    break;
  case 0x289:
    lVar6 = 0x1b;
    break;
  case 0x28b:
    break;
  case 0x28d:
    lVar6 = 1;
    break;
  case 0x28f:
    lVar6 = 2;
    break;
  case 0x291:
    lVar6 = 3;
    break;
  case 0x293:
    lVar6 = 4;
    break;
  case 0x295:
    lVar6 = 6;
    break;
  case 0x297:
    lVar6 = 10;
    break;
  case 0x299:
    lVar6 = 0xb;
    break;
  case 0x29b:
    lVar6 = 0x1c;
    break;
  case 0x29d:
    lVar6 = 0x1d;
    break;
  case 0x29f:
    lVar6 = 0x1e;
    break;
  case 0x2a1:
    lVar6 = 0x1f;
    break;
  case 0x2a3:
    lVar6 = 0x20;
    break;
  case 0x2a5:
    lVar6 = 0x21;
    break;
  case 0x2a7:
    lVar6 = 0xd;
    break;
  default:
    if (iVar5 == 0x2c6) {
      lVar6 = 0xc;
    }
    else {
      if (iVar5 != 0x205) goto switchD_011b53c8_caseD_270;
      lVar6 = 0x22;
    }
  }
switchD_011b53c8_caseD_28b:
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
LAB_011b568c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  (*(code *)(&PTR_FUN_045864a0)[lVar6 * 3])
            (param_1 + ((long)(&DAT_045864a8)[lVar6 * 3] >> 1),&local_8,param_3,param_4);
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else {
LAB_011b5494:
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


